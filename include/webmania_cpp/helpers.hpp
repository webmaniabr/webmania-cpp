#pragma once
#include "core.hpp"
#include <functional>
#include <type_traits>
namespace webmania {
enum class StopReason { complete, limit, cancelled, deadline, error };
struct Bounds {
  std::size_t max_calls=10;
  std::chrono::milliseconds timeout{30000};
  std::chrono::milliseconds interval{0};
};
template<class T> struct Attempt {
  std::optional<T> value;
  std::optional<Error> error;
};
template<class T> struct BoundedResult {
  std::vector<Attempt<T>> attempts;
  StopReason reason=StopReason::limit;
};
// Fetch is a user supplied typed read callback. Never pass a mutation here.
// All values/errors are retained and the first error stops iteration.
template<class T,class Fetch,class Complete> BoundedResult<T> bounded_poll(
    Fetch&& fetch,Complete&& complete,Bounds bounds={},const Cancel* cancel=nullptr) {
  static_assert(std::is_same_v<std::decay_t<std::invoke_result_t<Fetch,const Cancel*>>,T>,"Fetch must return the declared nominal type.");
  if(!bounds.max_calls||bounds.max_calls>10000||bounds.timeout.count()<=0||bounds.timeout>std::chrono::hours(24)||bounds.interval.count()<0)
    throw std::invalid_argument("Polling requires finite positive call/time bounds.");
  auto stop=std::chrono::steady_clock::now()+bounds.timeout;
  BoundedResult<T> result;
  for(std::size_t i=0;i<bounds.max_calls;++i){
    if(cancel&&cancel->requested()){result.reason=StopReason::cancelled;return result;}
    if(std::chrono::steady_clock::now()>=stop){result.reason=StopReason::deadline;return result;}
    try {result.attempts.push_back({std::invoke(fetch,cancel),{}});}
    catch(const Error&e){result.attempts.push_back({{},e});result.reason=StopReason::error;return result;}
    if(std::invoke(complete,*result.attempts.back().value)){result.reason=StopReason::complete;return result;}
    if(i+1==bounds.max_calls)break; // no wait after the last permitted call
    auto wake=std::min(stop,std::chrono::steady_clock::now()+std::min(bounds.interval,bounds.timeout));
    while(std::chrono::steady_clock::now()<wake){
      if(cancel&&cancel->requested()){result.reason=StopReason::cancelled;return result;}
      std::this_thread::sleep_for(std::min(std::chrono::milliseconds(10),std::chrono::duration_cast<std::chrono::milliseconds>(wake-std::chrono::steady_clock::now())));
    }
  }
  return result;
}
// Next updates the caller's typed cursor/query and returns false at the end.
template<class T,class Fetch,class Next> BoundedResult<T> bounded_pages(
    Fetch&& fetch,Next&& next,Bounds bounds={},const Cancel* cancel=nullptr){
  return bounded_poll<T>(std::forward<Fetch>(fetch),[&](const T& page){return !std::invoke(next,page);},bounds,cancel);
}
}
