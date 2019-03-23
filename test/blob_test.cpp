//
// Created by 钟乘永 on 2019-03-23.
//

#include "blob.h"
#include <gtest/gtest.h>

namespace dnn {

    class BlobTest : public testing::Test {
    public:
        BlobTest() : blob_(new Blob()), shaped_blob_(new Blob(1)), tempTest(new TempTest()) {
//            shaped_blob_(new Blob());
//            shaped_blob_->Reshape(2, 3, 4, 5);
            tempTest->test();
        };

        Blob *const blob_;
        TempTest *tempTest;
        Blob *const shaped_blob_;
    };

//    TYPED_TEST_CASE(BlobTest, int_vec);

    TEST(BlobTest, INIT) {
        Blob* blob = new Blob(2, 3, 4, 5);

       EXPECT_EQ(blob->GetNums(), 2);
       EXPECT_EQ(blob->GetChannels(), 3);
       EXPECT_EQ(blob->GetHeight(), 4);
       EXPECT_EQ(blob->GetWidth(), 5);
    }
} // namespace dnn