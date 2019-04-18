//
// Created by 钟乘永 on 2019-03-24.
//

#ifndef FLY_DNN_CONVOLUTION_PARAM_H
#define FLY_DNN_CONVOLUTION_PARAM_H

#include "dnn/util.h"
#include "params.h"
#include <iostream>

/**
 * Convolution param for convolution layer.
 */
namespace dnn {
    class ConvolutionParam : public Params {
    public:
        size_t kernel_w;
        size_t kernel_h;
        size_t out_channel_;
        Padding padding_;
        size_t pad_;
        size_t stride_w_;
        size_t stride_h_;
        size_t dilation_w_;
        size_t dilation_h_;
        bool has_bias;

        friend std::ostream &operator<<(std::ostream &os, ConvolutionParam &param) {
            os << "kernel_w:" << param.kernel_w << "\n";
            os << "kernel_h:" << param.kernel_h << "\n";
            return os;
        }

//        std::ostream &operator<<(std::ostream &os) {
//            os << "kernel_w:" << kernel_w << "\n";
//            os << "kernel_h:" << kernel_h << "\n";
//            return os;
//        }

        ConvolutionParam &Conv() override {
            return *static_cast<ConvolutionParam *>(this);
        }

    };
} // namespace dnn


#endif //FLY_DNN_CONVOLUTION_PARAM_H
