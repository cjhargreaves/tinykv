#include <iostream>
#include <vector>
#include "tensor.h"


int main() {

  float data[] =  {1, 2, 3, 4, 5, 6, 7, 8};
  std::vector<int> shape = {2, 4, 8};

  Tensor t(data, shape);
  
  t.printStrides();
  
}
