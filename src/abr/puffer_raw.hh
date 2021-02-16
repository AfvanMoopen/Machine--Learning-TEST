#ifndef macht_RAW_HH
#define macht_RAW_HH

#include "macht.hh"

#include <deque>

class machtRaw : public macht
{
public:
  machtRaw(const WebSocketClient & client,
            const std::string & abr_name, const YAML::Node & abr_config);

private:
  static constexpr double ST_VAR_COEFF = 0.7;
  static constexpr double HIGH_SENDING_TIME = 10000;

  double st_var_coeff_ {ST_VAR_COEFF};

  void reinit_sending_time() override;
};

#endif /* macht_RAW_HH */
