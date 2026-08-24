# Architecture

## Overview

agt_traversability_lab is organized as an experiment platform.

```
ROS2 rosbag2
    |
    v
PointCloud2
    |
    v
Ground Segmentation
    |
    v
Local Representation
    |
    v
Traversability Estimation
```

## Design Principle

Each experiment should have:

1. Fixed input dataset
2. Configuration parameters
3. Reproducible execution command
4. Visualization result
5. Evaluation metrics
6. Conclusion record

## Boundary

This repository studies environment understanding.

It does not include:

- Mission planning
- Global navigation
- Robot task execution

Those functions belong to higher-level navigation systems.
