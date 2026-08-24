#!/usr/bin/env bash

set -e

# EXP001: MID360 rosbag2 visualization baseline
#
# Reproducible entry point:
# rosbag2 -> agt_cloud_visualizer -> RViz2

BAG_PATH=${1:-"datasets/greenhouse_corridor_001/rosbag"}

if [ ! -d "$BAG_PATH" ]; then
    echo "[ERROR] rosbag path does not exist: $BAG_PATH"
    echo "Usage: ./scripts/run_exp001.sh <rosbag2_directory>"
    exit 1
fi

echo "[INFO] Starting EXP001"
echo "[INFO] Dataset: $BAG_PATH"

echo "[INFO] Launching agt_cloud_visualizer"
ros2 launch agt_cloud_visualizer visualization.launch.py &

sleep 3

echo "[INFO] Playing rosbag"
ros2 bag play "$BAG_PATH"
