//
// Created by 钟乘永 on 2019-03-24.
//

#ifndef FLY_DNN_UTIL_H
#define FLY_DNN_UTIL_H

#include "glog/logging.h"




#endif //FLY_DNN_UTIL_H

/**
 * Padding include valid and same.
 */
enum class Padding {
    VALID,
    SAME
};

template<typename T>
struct Shape {
    Shape() : channel_(0), height_(0), width_(0) {}

    Shape(T channel, T height, T width) {
        Reshape(channel, height, width);
    }

    void Reshape(T channel, T height, T width) {
        channel_ = channel;
        height_ = height;
        width_ = width;

    }

    T channel_;
    T height_;
    T width_;
};