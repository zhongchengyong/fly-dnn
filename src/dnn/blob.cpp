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
    template<typename DType>
    Blob<DType>::Blob(const int batch, const int channels, const int height, const int width) {
        Init();
        Reshape(batch, channels, height, width);
    }

    template<typename DType>
    Blob<DType>::Blob(const vector<int> &shape) {

    }

    template<typename DType>
    void Blob<DType>::Init() {

    }

    template<typename DType>
    bool Blob<DType>::Reshape(int batch, int channels, int height, int width) {
        int_vec shape(4);
        shape[0] = batch;
        shape[1] = channels;
        shape[2] = height;
        shape[3] = width;
        return Reshape(shape);
    }

    template<typename DType>
    bool Blob<DType>::Reshape(const int_vec &shape) {
        this->shape_ = make_shared<int_vec>(shape);
        return true;
    }

    template<typename DType>
    vector<DType> *Blob<DType>::GetData() {
        return data_.get();
    }

    template<typename DType>
    vector<DType> *Blob<DType>::GetGradient() {
        return diff_.get();
    }

    template<typename DType>
    void Blob<DType>::Clear() {
        this->data_ = nullptr;
        this->diff_ = nullptr;
    }

    template<typename DType>
    void Blob<DType>::Update() {

    }

    template<typename DType>
    int_vec *Blob<DType>::GetShape() {
        return shape_.get();
    }

    INSTANTIATE_CLASS_1T(Blob, (float)(double)(int)(unsigned));
} // namespace dnn