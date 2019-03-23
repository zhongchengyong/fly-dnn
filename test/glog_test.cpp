//
// Created by 钟乘永 on 2019-03-23.
//

#include <iostream>
#include <gtest/gtest.h>
#include "glog/logging.h"

TEST(GLOG, LOG){
    FLAGS_alsologtostderr = 1;
    google::InitGoogleLogging("test");
//    google::InitGoogleLogging(argv[0]);

    LOG(INFO) << "I am INFO!";
    LOG(WARNING) << "I am WARNING!";
    LOG(ERROR) << "I am ERROR!";
    LOG(FATAL) << "I am FATAL!";
}
