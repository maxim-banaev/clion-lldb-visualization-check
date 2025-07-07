#pragma once

#include <memory>

using namespace std;

inline int check_smart_pointers() {
  auto ptr_shared_ = make_shared<MyPoint>(1, 3);
  auto ptr_unique_ = make_unique<MyPoint>(1, 3);

  return 1;
}
