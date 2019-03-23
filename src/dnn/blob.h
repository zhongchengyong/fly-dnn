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

#ifndef FLY_DNN_BLOB_H
#define FLY_DNN_BLOB_H

/*
 * 数据使用vector<double>表示权重和梯度信息
 */

#include "definition.h"
#include <memory>
namespace dnn {
    template<typename DType>
    class Blob {
    public:
        //Tips: 在函数声明时不使用const int，而是在函数定义的时候使用const int，只有在定义时使用const int才有效
        explicit Blob(int batch, int channels, int height, int width);

        explicit Blob(const vector<int>& shape);

        void Init();

        virtual bool Reshape(int batch, int channels, int height, int width);

        virtual bool Reshape(const int_vec &shape);

        virtual DType *GetData();

        virtual DType *GetGradient();

        virtual void Clear();

        virtual void Update();

    protected:
        shared_ptr<DType> data_;
        shared_ptr<DType> diff_;
        shared_ptr<int_vec> shape;

        uint_t count_;
        uint_t capacity_;
    };
}; // namespace dnn


#endif //FLY_DNN_BLOB_H
