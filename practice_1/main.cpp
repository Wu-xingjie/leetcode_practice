#include <iostream>

#include "practice1.h"

int main() {
  PRACTICE::ElemOfSum test;
  double nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  std::vector<PRACTICE::ElemOfSum::elems> result = test.find(nums, 12.0, 10);
  for (auto elem : result) {
    std::cout << "[" << elem.elem1 << " ," << elem.elem2 << "]" << std::endl;
  }
  return 0;
}