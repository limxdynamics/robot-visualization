# 中文 | [English](README.md)

# robot-visualization

LimX 机器人可视化桥接工具——通过 RViz 实时显示和 PlotJuggler 数据绘图，可视化关节状态、IMU、力传感器与运动轨迹。支持 ROS 1（Noetic）和 ROS 2。

## 目录结构

```
.
|-- lib/              # 预编译运行时依赖（按 ROS 发行版和架构区分）
|-- ros1/             # ROS 1（Noetic）launch、RViz 和 PlotJuggler 配置
|   |-- launch/       # pointfoot 和 wheellegged 机器人的 .launch 文件
|   |-- rviz/         # .rviz 配置文件
|-- ros2/             # ROS 2 launch、RViz 和 PlotJuggler 配置
|   |-- launch/       # pointfoot 机器人的 .launch.py 文件
|   |-- rviz/         # .rviz 配置文件
|-- CMakeLists.txt    # 构建配置
|-- package.xml       # ROS 包清单（包名：robot_visualization）
|-- LICENSE           # 许可证文件
```

## 环境要求

- ROS 1（Noetic）**或** ROS 2
- RViz（ROS desktop 安装已包含）
- PlotJuggler（可选，用于时序数据绘图）

## 安装

```bash
cd <workspace>/src
git clone https://github.com/limxdynamics/robot-visualization.git
cd ..
catkin_make    # ROS 1
# 或
colcon build   # ROS 2
```

## 使用方法

启动文件按机器人类型和模式组织。`_plot_` 变体启动 PlotJuggler 数据绘图；`_rviz_` 变体启动 RViz 三维可视化；`_hw` 对应真实硬件，`_sim` 对应仿真。

> **机器人类型说明：** "pointfoot" 对应 SF（sole-foot）机器人；"wheellegged" 对应 WF（wheel-foot）机器人。此处沿用本仓库 launch 文件中的实际命名。

> **注意：** ROS 2 目前仅提供 pointfoot 机器人的 launch 文件。wheellegged 可视化在 ROS 1 下可用，ROS 2 尚未支持。

### ROS 1 示例

```bash
source devel/setup.bash

# pointfoot 机器人 RViz 可视化（硬件模式）
roslaunch robot_visualization pointfoot_rviz_hw.launch

# pointfoot 机器人 PlotJuggler 数据绘图（仿真模式）
roslaunch robot_visualization pointfoot_plot_sim.launch
```

### ROS 2 示例

```bash
source install/setup.bash

# pointfoot 机器人 RViz 可视化（硬件模式）
ros2 launch robot_visualization pointfoot_rviz_hw.launch.py

# pointfoot 机器人 PlotJuggler 数据绘图（仿真模式）
ros2 launch robot_visualization pointfoot_plot_sim.launch.py
```

## 相关仓库

| 仓库 | 描述 |
|---|---|
| [tron1-rl-deploy-ros](https://github.com/limxdynamics/tron1-rl-deploy-ros) | TRON1 RL 部署（ROS） |
| [tron1-rl-deploy-ros2](https://github.com/limxdynamics/tron1-rl-deploy-ros2) | TRON1 RL 部署（ROS 2） |
| [humanoid-rl-deploy-ros](https://github.com/limxdynamics/humanoid-rl-deploy-ros) | 人形机器人 RL 部署（ROS） |
| [humanoid-rl-deploy-ros2](https://github.com/limxdynamics/humanoid-rl-deploy-ros2) | 人形机器人 RL 部署（ROS 2） |

## 许可证

详见随附的 [LICENSE](LICENSE) 文件。
