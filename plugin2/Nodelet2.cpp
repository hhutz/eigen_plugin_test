#include "Nodelet2.h"

#include <eigen_conversions/eigen_msg.h>
#include <pluginlib/class_list_macros.h>
#include <geometry_msgs/Pose.h>

#include <Eigen/Core>
#include <iostream>

// watch the capitalization carefully
PLUGINLIB_EXPORT_CLASS(Nodelet2, nodelet::Nodelet)

using namespace std;

void Nodelet2::onInit()
{
  try {
    cerr << "Nodelet2::onInit() " << endl;

#ifdef THIS_MAKES_IT_WORK
    Eigen::MatrixXd dummy2(8, 8);
    Eigen::MatrixXd dummy3(8, 8);
    dummy2.setZero();
    dummy3.setZero();
    cerr << "multiply: " << flush << dummy2 * dummy3 << endl;
#endif
        
    cerr << "Nodelet2::onInit() done" << endl;
  }
  catch (std::exception const& e) {
    geometry_msgs::Pose src;
    Eigen::Affine3d pose;
    tf::poseMsgToEigen(src, pose);
    cerr << pose.translation() << endl;
  }
}
