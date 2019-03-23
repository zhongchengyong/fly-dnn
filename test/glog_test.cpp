//
// Created by 钟乘永 on 2019-03-23.
//

#include <iostream>
#include <gtest/gtest.h>
#include "glog/logging.h"

TEST(GLOG, LOG){
    FLAGS_alsologtostderr = true;

    // 输出日志
    LOG(INFO) << "I am INFO!";
    LOG(WARNING) << "I am WARNING!";
    LOG(ERROR) << "I am ERROR!";
    // LOG(FATAL) << "I am FATAL!";

    // 条件输出日志
    LOG_IF(INFO, 1 == 1) << "Equal and output";
    LOG_IF(INFO, 1 == 2) << "Not equal and hide";

    // 调试模式输出日志
    DLOG(INFO) << "Output in debug mode";

    // CHECK判断，不受DEBUG选项影响
    CHECK(1 != 2);
    CHECK_EQ(1, 1);
    CHECK_NE(1, 2);

    int a = 1;
    int *pa = &a;
    CHECK_NOTNULL(pa);

}
