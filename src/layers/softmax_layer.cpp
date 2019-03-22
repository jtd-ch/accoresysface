//
// Created by jbk on 19-3-22.
//


#include <vector>
#include "softmax_layer.hpp"


using namespace std;

namespace caffe{

    void SoftmaxLayer::SetUp(const LayerParameter& param, const vector<pair<string, shared_ptr<Blob>>>& bottom, vector<pair<string, shared_ptr<Blob>>>& top)
    {
        cout << "SoftmaxLayer::SetUp()..." << param.name() << endl;

        return;
    }


    void SoftmaxLayer::Forward(const vector<pair<string, shared_ptr<Blob>>>& bottom, vector<pair<string, shared_ptr<Blob>>>& top)
    {
        cout << "SoftmaxLayer::forward()..." << endl;

        return;
    }

    void SoftmaxLayer::calc_shape_(const vector<int>& in_shape, vector<int>& out_shape)
    {
        cout << "SoftmaxLayer::calc_shape()..." << endl;

        return;
    }

}
