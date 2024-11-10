#include "practice1.h"

namespace PRACTICE {
std::vector<ElemOfSum::elems> ElemOfSum::find(double* nums, double sum,
                                              int size) {
  std::vector<ElemOfSum::elems> result;
  ElemOfSum::elems elem;
  for (int i = 0; i < size; i++) {
    for (int j = i; j < size; j++) {
      if (nums[i] + nums[j] == sum) {
        elem.elem1 = nums[i];
        elem.elem2 = nums[j];
        result.push_back(elem);
      } else {
        continue;
      }
    }
  }
  return result;
}
}  // namespace PRACTICE