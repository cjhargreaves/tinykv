#include "tensor.h"
#include <iostream>
#include <vector>


Tensor::Tensor(float* new_data, std::vector<int> new_shape) : data(new_data), shape(new_shape) {

  strides.push_back(1);

  for (int i = shape.size() - 1; i > 0; i--) {
    strides.push_back(strides.back() * shape[i]);
  }

  std::reverse(strides.begin(), strides.end());
}

void Tensor::printStrides() {
  
  for (int i = 0; i < strides.size() - 1; i++) {
    std::cout << strides[i] << " ";
  }
    

}



