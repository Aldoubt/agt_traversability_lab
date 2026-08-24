# agt_traversability_lab

A LiDAR-based traversability evaluation framework for agricultural robots.

## Purpose

This repository focuses on local perception and traversability evaluation in dynamic agricultural environments.

The goal is not to build a complete navigation system, but to study how robots understand their surroundings and decide whether a path remains safe and feasible.

## Research Questions

- How can MID360 LiDAR data be transformed into reliable local environmental representations?
- Which ground segmentation strategy is suitable for agricultural scenes?
- How can vegetation growth and corridor deformation be evaluated?
- How can robot traversability be estimated from local perception?

## Pipeline

```
Sensor Data (ROS2 rosbag2)
          |
          v
PointCloud Visualization
          |
          v
Ground Segmentation
          |
          v
Local Map Representation
          |
          v
Traversability Estimation
          |
          v
Navigation Interface
```

## Scope

Current focus:

- Livox MID360 point cloud processing
- ROS2 visualization pipeline
- Ground segmentation benchmark
- Local mapping
- Traversability evaluation

## Relationship with other projects

`agt_navigation_v2` focuses on complete navigation system integration.

`agt_traversability_lab` focuses on perception experiments and produces reusable environmental understanding modules.

## Roadmap

- Phase 0: Repository and experiment framework initialization
- Phase 1: MID360 rosbag visualization baseline
- Phase 2: Ground segmentation comparison
- Phase 3: Local map generation
- Phase 4: Traversability estimation
- Phase 5: Algorithm benchmark
