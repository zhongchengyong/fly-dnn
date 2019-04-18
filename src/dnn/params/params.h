//
// Created by 钟乘永 on 2019-03-24.
//

#ifndef FLY_DNN_PARAMS_H
#define FLY_DNN_PARAMS_H

namespace dnn {
    class ConvolutionParam;

    class Params {
    public:
        Params(){}

        virtual ConvolutionParam& Conv() = 0;
    };
}


#endif //FLY_DNN_PARAMS_H
