//
// Created by 钟乘永 on 2019-04-18.
//

#include <gtest/gtest.h>
#include <iostream>

#include "dnn/params/convolution_param.h"

using namespace dnn;

class ConvolutionParamTest : public ::testing::Test {
public:
    ConvolutionParamTest() = default;

    ConvolutionParam conv_param;
};

TEST_F(ConvolutionParamTest, OPERATOR) {
    conv_param.kernel_w = 1;
    conv_param.kernel_h = 1;
    std::cout << conv_param;
}

