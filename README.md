# pairs_liosam_estimator_plugin

A LIO-SAM state-estimator plugin for the PAIRS UAV autonomy stack. It exposes the LiDAR-inertial odometry produced by LIO-SAM to the PAIRS estimation manager, so the multirotor can localize and fly using LiDAR-based SLAM instead of GNSS. The plugin is loaded at runtime by the EstimationManager in `pairs_uav_managers` and fuses LIO-SAM fusion odometry into the lateral, altitude, and heading estimators.

## Contents

- `liosam/LiosamEstimatorPlugin` — pluginlib state-estimator plugin (`liosam::Liosam`, derived from `pairs_uav_state_estimators::StateGeneric`), built into the `PairsUavStateEstimators_Liosam` library and registered via `estimator_plugins.xml`.
- `custom_configs/pairs_uav_managers.yaml` — example manager configuration that wires the `liosam` estimator into the estimation, constraint, gain, and transform managers.

## Branches

- `ros1` — ROS 1 Noetic (catkin)

## Install (ROS 1 Noetic)

```bash
sudo apt install ros-noetic-pairs-liosam-estimator-plugin
```

This package provides a pluginlib plugin; it has no nodes or launch files of its own. Enable the `liosam` estimator through the EstimationManager configuration in `pairs_uav_managers` (see `custom_configs/pairs_uav_managers.yaml` for a reference).

## License

BSD 3-Clause. Derived from the CTU-MRS `pairs_liosam_estimator_plugin` package; the original
copyright is retained in [LICENSE](LICENSE).
