#pragma once
#include <vector>

namespace PRACTICE {

class ElemOfSum {
 public:
  ElemOfSum() = default;
  ~ElemOfSum() = default;

  struct elems {
    double elem1;
    double elem2;
  };

  std::vector<elems> find(double* nums, double sum,int size);
};
}  // namespace PRACTICE