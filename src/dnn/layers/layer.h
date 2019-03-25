//
// Created by 钟乘永 on 2019-03-24.
//

#ifndef FLY_DNN_LAYER_H
#define FLY_DNN_LAYER_H

template<typename DType, typename IType, typename OType>
class Layer {
public:
    explicit Layer() {};

    virtual void forward_propagation(const IType &in_data, const OType &out_data) = 0;

    virtual void backward_propagation(const IType &in_data, const OType &out_data,
                                      const IType &in_grad, const OType &out_grad) = 0;
};


#endif //FLY_DNN_LAYER_H
