#include <webmania_cpp/models.hpp>

namespace webmania {
api2_emitter_files::NfsePdfPending FileOrRedirect::pending()const {
  if(result_kind()!=FileResultKind::pending)throw std::logic_error("File result is not Pending.");
  return api2_emitter_files::NfsePdfPending(wm_file_or_redirect_pending(native_handle()));
}
}
