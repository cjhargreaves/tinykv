#ifndef TENSOR_H
#define TENSOR_H

#include <vector>

struct Tensor {

  float* data;
  std::vector<int> shape;
  std::vector<int> strides;
  Tensor(float* data, std::vector<int> shape);
  void printStrides();
  float at(std::vector<int> indices);

};

#endif
