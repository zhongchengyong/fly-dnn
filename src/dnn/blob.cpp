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

/**
 * The Blob is used to represent dnn data model.
 */
#include "blob.h"

namespace dnn {
    Blob::Blob(const int batch, const int channels, const int height, const int width) {
        Init();
        Reshape(batch, channels, height, width);
    }

    Blob::Blob(const vector<int> &shape) {

    }

    void Blob::Init() {

    }

    bool Blob::Reshape(int batch, int channels, int height, int width) {
        int_vec shape(4);
        shape[0] = batch;
        shape[1] = channels;
        shape[2] = height;
        shape[3] = width;
        return Reshape(shape);
    }

    bool Blob::Reshape(const int_vec &shape) {
        this->shape_ = make_shared<int_vec>(shape);
        return true;
    }

    d_vec *Blob::GetData() {
        return data_.get();
    }

    d_vec *Blob::GetGradient() {
        return diff_.get();
    }

    void Blob::Clear() {
        this->data_ = nullptr;
        this->diff_ = nullptr;
    }

    void Blob::Update() {

    }

    int_vec * Blob::GetShape() {
        return shape_.get();
    }

    void TempTest::test() {

    }
} // namespace dnn