# English | [中文](README_cn.md)

# robot-visualization

Visualization bridge for LimX robots — real-time RViz display and PlotJuggler data plotting for joint states, IMU, force sensors, and motion trajectories. Supports ROS 1 (Noetic) and ROS 2.

## Directory Structure

```
.
|-- lib/              # Prebuilt runtime dependencies (by ROS distro and arch)
|-- ros1/             # ROS 1 (Noetic) launch, RViz config, and PlotJuggler config
|   |-- launch/       # .launch files for pointfoot and wheellegged robots
|   |-- rviz/         # .rviz config files
|-- ros2/             # ROS 2 launch, RViz config, and PlotJuggler config
|   |-- launch/       # .launch.py files for pointfoot robots
|   |-- rviz/         # .rviz config files
|-- CMakeLists.txt    # Build configuration
|-- package.xml       # ROS package manifest (package name: robot_visualization)
|-- LICENSE           # License file
```

## Requirements

- ROS 1 (Noetic) **or** ROS 2
- RViz (included with ROS desktop installations)
- PlotJuggler (optional, for time-series data plotting)

## Installation

```bash
cd <workspace>/src
git clone https://github.com/limxdynamics/robot-visualization.git
cd ..
catkin_make    # ROS 1
# or
colcon build   # ROS 2
```

## Usage

Launch files are organized by robot type and mode. The `_plot_` variants launch PlotJuggler for data plotting; the `_rviz_` variants launch RViz for 3D visualization; `_hw` runs against real hardware, `_sim` against simulation.

> **Note on robot types:** "pointfoot" covers SF (sole-foot) robots; "wheellegged" covers WF (wheel-foot) robots. These file names match the launch file naming used in this repository.

> **Note:** ROS 2 currently only provides launch files for pointfoot robots. Wheellegged visualization is available under ROS 1; ROS 2 support is not yet included.

### ROS 1 examples

```bash
source devel/setup.bash

# RViz visualization for pointfoot robot (hardware)
roslaunch robot_visualization pointfoot_rviz_hw.launch

# PlotJuggler data plotting for pointfoot robot (simulation)
roslaunch robot_visualization pointfoot_plot_sim.launch
```

### ROS 2 examples

```bash
source install/setup.bash

# RViz visualization for pointfoot robot (hardware)
ros2 launch robot_visualization pointfoot_rviz_hw.launch.py

# PlotJuggler data plotting for pointfoot robot (simulation)
ros2 launch robot_visualization pointfoot_plot_sim.launch.py
```

## Related Repositories

| Repository | Description |
|---|---|
| [tron1-rl-deploy-ros](https://github.com/limxdynamics/tron1-rl-deploy-ros) | TRON1 RL deployment (ROS) |
| [tron1-rl-deploy-ros2](https://github.com/limxdynamics/tron1-rl-deploy-ros2) | TRON1 RL deployment (ROS 2) |
| [humanoid-rl-deploy-ros](https://github.com/limxdynamics/humanoid-rl-deploy-ros) | Humanoid RL deployment (ROS) |
| [humanoid-rl-deploy-ros2](https://github.com/limxdynamics/humanoid-rl-deploy-ros2) | Humanoid RL deployment (ROS 2) |

## License

Distributed under the included [LICENSE](LICENSE) file.
