#include <pairs_uav_state_estimators/estimators/state/state_generic.h>

namespace liosam
{

const char estimator_name[] = "liosam";
const bool is_core_plugin = false;

class Liosam : public pairs_uav_state_estimators::StateGeneric {
public:
  Liosam() : pairs_uav_state_estimators::StateGeneric(estimator_name, is_core_plugin) {
  }

  ~Liosam(void) {
  }
};

}  // namespace liosam

#include <pluginlib/class_list_macros.h>
PLUGINLIB_EXPORT_CLASS(liosam::Liosam, pairs_uav_managers::StateEstimator)

