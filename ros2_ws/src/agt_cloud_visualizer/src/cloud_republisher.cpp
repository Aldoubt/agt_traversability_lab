#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/point_cloud2.hpp"

class CloudRepublisher : public rclcpp::Node
{
public:
  CloudRepublisher()
  : Node("cloud_republisher")
  {
    input_topic_ = declare_parameter<std::string>("input_topic", "/livox/lidar");
    output_topic_ = declare_parameter<std::string>("output_topic", "/agt/cloud/visualization");

    publisher_ = create_publisher<sensor_msgs::msg::PointCloud2>(output_topic_, 10);

    subscription_ = create_subscription<sensor_msgs::msg::PointCloud2>(
      input_topic_,
      10,
      std::bind(&CloudRepublisher::cloudCallback, this, std::placeholders::_1));

    RCLCPP_INFO(get_logger(), "Cloud visualizer started: %s -> %s",
      input_topic_.c_str(), output_topic_.c_str());
  }

private:
  void cloudCallback(const sensor_msgs::msg::PointCloud2::SharedPtr msg)
  {
    publisher_->publish(*msg);
  }

  std::string input_topic_;
  std::string output_topic_;

  rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr subscription_;
  rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr publisher_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<CloudRepublisher>());
  rclcpp::shutdown();
  return 0;
}
