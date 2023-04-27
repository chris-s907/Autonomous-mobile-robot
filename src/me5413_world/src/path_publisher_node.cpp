#include<ros/ros.h>
#include<string>
#include<iostream>
#include<nav_msgs/Odometry.h>
#include<nav_msgs/Path.h>
#include<geometry_msgs/Pose.h>
#include<geometry_msgs/PoseStamped.h>
 
double ix, iy, px, py;
 
void poseCallback(const nav_msgs::Odometry &p_msg){
    px = p_msg.pose.pose.position.x;
    py = p_msg.pose.pose.position.y;
}
 
int main(int argc,char** argv){
 
    ros::init(argc, argv, "path_publisher_node");
    ros::NodeHandle nh;
    ros::Publisher path_pub = nh.advertise<nav_msgs::Path>("/trajectory", 1, true);
    ros::Subscriber pose_sub = nh.subscribe("/gazebo/ground_truth/state", 10, poseCallback);
    bool is_start = true;
    nav_msgs::Path path;

    // tf2_ros::Buffer tfBuffer;
    // tf2_ros::TransformListener tfListener(tfBuffer);

    // std::string source_frame = "odom_combined";
    // std::string target_frame = "base_link";

ros::Rate rate(10.0);
    
    while(ros::ok()){
        ros::spinOnce();
        if(is_start){
            ix = px;
            iy = py;
            is_start = false;
        }

        // try {
        // geometry_msgs::TransformStamped transformStamped;
        // transformStamped = tfBuffer.lookupTransform(target_frame, source_frame, ros::Time(0));
        // // Do something with the transform...
        // }
        // catch (tf2::TransformException &ex) {
        //     ROS_WARN("%s", ex.what());
        // }

        // rate.sleep();
        
        path.header.stamp = ros::Time::now();
        path.header.frame_id = "map";
        
        geometry_msgs::PoseStamped this_pose_stamped;
        this_pose_stamped.pose.position.x = px-ix;
        this_pose_stamped.pose.position.y = py-iy;
        
        this_pose_stamped.pose.orientation.x = 0;
        this_pose_stamped.pose.orientation.y = 0;
        this_pose_stamped.pose.orientation.z = 0;
        this_pose_stamped.pose.orientation.w = 1;
        this_pose_stamped.header.stamp = ros::Time::now();
        this_pose_stamped.header.frame_id = "map";
 
        path.poses.push_back(this_pose_stamped);
        path_pub.publish(path);
 
    }
 
    return 0;
}



// #include <ros/ros.h>
// #include <nav_msgs/Path.h>
// #include <geometry_msgs/PoseStamped.h>
// #include <nav_msgs/Odometry.h>

// ros::Publisher path_pub;
// nav_msgs::Path path;

// void odomCallback(const nav_msgs::Odometry::ConstPtr& msg)
// {
//   geometry_msgs::PoseStamped this_pose_stamped;
//   this_pose_stamped.pose.position.x = msg->pose.pose.position.x;
//   this_pose_stamped.pose.position.y = msg->pose.pose.position.y;
  
//   this_pose_stamped.pose.orientation.x = 0;
//   this_pose_stamped.pose.orientation.y = 0;
//   this_pose_stamped.pose.orientation.z = 0;
//   this_pose_stamped.pose.orientation.w = 1;
//   this_pose_stamped.header.stamp = ros::Time::now();
//   this_pose_stamped.header.frame_id = "/odom_combined";
//   path.poses.push_back(this_pose_stamped);
//   path.header.stamp = ros::Time::now();
//   path.header.frame_id = "/odom_combined";
//   path_pub.publish(path);
// }

// int main(int argc, char** argv)
// {
//   ros::init(argc, argv, "path_publisher_node");
//   ros::NodeHandle nh;
//   ros::Subscriber odom_sub = nh.subscribe("/gazebo/ground_truth/state", 10, odomCallback);
//   path_pub = nh.advertise<nav_msgs::Path>("/path", 10);
//   ros::spin();
//   return 0;
// }
