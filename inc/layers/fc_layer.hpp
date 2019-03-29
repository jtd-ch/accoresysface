//
// Created by jbk on 19-3-14.
//

#ifndef LOADPARAM_FLATTEN_LAYER_H
#define LOADPARAM_FLATTEN_LAYER_H

#include "layer.hpp"

using std::vector;
using std::shared_ptr;
using std::string;
using std::pair;

namespace caffe{

    class FCLayer : public Layer
    {
    public:
        FCLayer(){}
        ~FCLayer(){}
        void SetUp(const LayerParameter& param, const vector<Blob*>& bottom, vector<Blob*>& top);
        void Forward(const vector<Blob*>& bottom, vector<Blob*>& top);

    private:
        LayerParameter layer_param_;
        vector<int> in_shape_;
        vector<int> out_shape_;
        int nums_out_;
        bool bias_term_;
        bool transpose_;
        void calc_shape_(const vector<int>& in_shape, vector<int>& out_shape);
    };

}
#endif
