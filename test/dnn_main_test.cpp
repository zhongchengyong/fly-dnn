//
// Created by 钟乘永 on 2019-03-23.
//
#include <glog/logging.h>
#include <gtest/gtest.h>

int main(int argc, char** argv){
    google::InitGoogleLogging("test");
    testing::InitGoogleTest(&argc, argv);
    int r = RUN_ALL_TESTS();
    return r;
}