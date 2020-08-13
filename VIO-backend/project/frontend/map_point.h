//
// Created by gaoxiang19 on 19-1-7.
//
#pragma once

#include <memory>

namespace myslam {
namespace frontend {

struct Frame;
struct Feature;

struct MapPoint {
    ////EIGEN_MAKE_ALIGNED_OPERATOR_NEW;
    std::weak_ptr<Feature> ref_feature;
    float inv_depth = -1.0;
};

}
}
