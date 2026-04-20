#ifndef TENSOR_H
#define TENSOR_H

#include <vector>

struct Tensor {

  float* data;
  std::vector<int> shape;
  std::vector<int> strides;

};

#endif
