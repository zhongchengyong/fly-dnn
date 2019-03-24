/*
Copyright [2019] [kode]

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include "blob.h"
#include <gtest/gtest.h>

namespace dnn {

    template<typename DType>
    class BlobTest : public testing::Test {
    public:
        BlobTest() : blob_(new Blob<DType>()), shaped_blob_(new Blob<DType>(2, 3, 4, 5)) {}

        Blob<DType> *const blob_;
        Blob<DType> *const shaped_blob_;
    };

    TYPED_TEST_CASE(BlobTest, double);

    TYPED_TEST(BlobTest, INIT) {
        EXPECT_EQ(this->shaped_blob_->GetNums(), 2);
        EXPECT_EQ(this->shaped_blob_->GetChannels(), 3);
        EXPECT_EQ(this->shaped_blob_->GetHeight(), 4);
        EXPECT_EQ(this->shaped_blob_->GetWidth(), 5);

        EXPECT_FALSE(this->shaped_blob_->GetData());
        EXPECT_FALSE(this->shaped_blob_->GetGradient());

        int_vec shape{2, 3, 4, 5};
        EXPECT_EQ(*(this->shaped_blob_->GetShape()), shape);

        this->shaped_blob_->Clear();
        EXPECT_EQ(this->shaped_blob_->GetData(), nullptr);
    }
} // namespace dnn