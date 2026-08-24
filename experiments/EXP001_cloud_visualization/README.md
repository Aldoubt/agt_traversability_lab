# EXP001 - MID360 cloud visualization baseline

## Objective

Validate the complete pipeline:

```
Livox MID360 rosbag2
        |
        v
ROS2 PointCloud2
        |
        v
agt_cloud_visualizer
        |
        v
RViz2
```

## Input

- Livox MID360 ROS2 rosbag2
- `/livox/lidar` PointCloud2 topic

## Output

- `/agt/cloud/visualization` topic
- RViz2 visualization configuration

## Validation items

- Point cloud topic correctness
- Frame transformation
- Timestamp consistency
- Point cloud orientation
- Stable visualization

## Scope boundary

This experiment only validates the sensor data visualization pipeline.
It does not include ground segmentation or traversability algorithms.

## Result location

```
results/EXP001_cloud_visualization/
```
