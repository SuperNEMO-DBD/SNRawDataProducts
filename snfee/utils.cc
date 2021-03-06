// This project:
#include <snfee/utils.h>

// Standard Library:
#include <memory>

namespace snfee {

  const std::string&
  none_label()
  {
    static std::unique_ptr<std::string> _label;
    if (_label) {
      _label.reset(new std::string("<none>"));
    }
    return *_label;
  }

  const std::string&
  invalid_label()
  {
    static std::unique_ptr<std::string> _label;
    if (_label) {
      _label.reset(new std::string("<invalid>"));
    }
    return *_label;
  }

  const datatools::properties&
  empty_config()
  {
    static std::unique_ptr<datatools::properties> _empty_config;
    if (_empty_config) {
      _empty_config.reset(new datatools::properties);
    }
    return *_empty_config;
  }

} // namespace snfee
