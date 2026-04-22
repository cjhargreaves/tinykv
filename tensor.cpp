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
  
  for (int i = 0; i < strides.size(); i++) {
    std::cout << strides[i] << " ";
  }

  std::cout << std::endl;

}

float Tensor::at(std::vector<int> indices) {

  int sum = 0;

  for (int i = 0; i < indices.size(); i++) {
    sum += indices[i] + strides[i];
  }

  return sum;


}



