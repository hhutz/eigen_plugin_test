#include "Nodelet1.h"
 
#include <pluginlib/class_list_macros.h> // to load the nodelet

#include <eigen_conversions/eigen_msg.h>
#include <geometry_msgs/Pose.h>

#include <Eigen/Core>
#include <iostream>

PLUGINLIB_EXPORT_CLASS(Nodelet1, nodelet::Nodelet)

using namespace std;

void Nodelet1::onInit() 
{
  try {
    cerr << "Nodelet1::onInit()" << endl;

    Eigen::MatrixXd dummy2(8, 8);
    Eigen::MatrixXd dummy3(8, 8);
    dummy2.setZero();
    dummy3.setZero();
    cerr << "multiply: " << flush << dummy2 * dummy3 << endl;
        
    std::cerr << "Nodelet1::onInit() - done" << std::endl;  
  }
  catch (std::exception& e) {    
      geometry_msgs::Pose src;
      Eigen::Affine3d pose;
      tf::poseMsgToEigen(src, pose);
  }
}

