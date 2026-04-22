#include <iostream>
#include <vector>
#include "tensor.h"


int main() {

  float data[] =  {1, 2, 3, 4, 5, 6, 7, 8};
  std::vector<int> shape = {2, 4, 8};

  Tensor t(data, shape);
  
  t.printStrides();

  
  float data2[] = {1, 2, 3, 4, 5, 6};
  std::vector<int> shape2 = {2, 3};

  Tensor t2(data2, shape2);

  t2.printStrides();

  std::cout << t2.at({1, 2});
  
}
