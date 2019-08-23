#include "ros/ros.h"
#include "std_msgs/String.h"

void chatterCallback(const std_msgs::String::ConstPtr &msg) {
  ROS_INFO(" listener2@@@ I heared:[%s]", msg->data.c_str());
}
int main(int argc, char **argv) {
  /* code for main function */ 
  ros::init(argc, argv, "listener2");
  ros::NodeHandle n;
  ros::Subscriber sub = n.subscribe("chatter", 1000, chatterCallback);
  ros::spin();
  return 0;
}