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

#ifndef FLY_DNN_CONVOLUTION_LAYER_H
#define FLY_DNN_CONVOLUTION_LAYER_H

#include "layer.h"
#include "dnn/util.h"
#include <vector>

template<typename DType, typename IType, typename OType>
class ConvolutionLayer : public Layer<DType, IType, OType> {
public:
    explicit ConvolutionLayer(size_t in_width, size_t in_height, size_t window_size, size_t in_channels,
                              size_t out_channels, Padding padding = Padding::VALID, bool has_bias = true,
                              size_t w_stride = 1, size_t h_stride = 1, size_t w_dilation = 1, size_t h_dilation = 1) {

    }

};


#endif //FLY_DNN_CONVOLUTION_LAYER_H
