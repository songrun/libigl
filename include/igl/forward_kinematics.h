// This file is part of libigl, a simple c++ geometry processing library.
// 
// Copyright (C) 2013 Alec Jacobson <alecjacobson@gmail.com>
// 
// This Source Code Form is subject to the terms of the Mozilla Public License 
// v. 2.0. If a copy of the MPL was not distributed with this file, You can 
// obtain one at http://mozilla.org/MPL/2.0/.
#ifndef IGL_FORWARD_KINEMATICS_H
#define IGL_FORWARD_KINEMATICS_H
#include <Eigen/Core>
#include <Eigen/Geometry>
#include <vector>

namespace igl
{
  // Given a skeleton and a set of relative bone rotations compute absolute
  // rigid transformations for each bone.
  //
  // Inputs:
  //   C  #C by dim list of joint positions
  //   BE  #BE by 2 list of bone edge indices
  //   P  #BE list of parent indices into BE
  //   dQ  #BE list of relative rotations
  // Outputs:
  //   vQ  #BE list of absolute rotations
  //   vT  #BE list of absolute translations
  void forward_kinematics(
    const Eigen::MatrixXd & C,
    const Eigen::MatrixXi & BE,
    const Eigen::VectorXi & P,
    const std::vector<Eigen::Quaterniond> & dQ,
    std::vector<Eigen::Quaterniond> & vQ,
    std::vector<Eigen::Vector3d> & vT);
};

#ifdef IGL_HEADER_ONLY
#  include "forward_kinematics.cpp"
#endif
#endif
