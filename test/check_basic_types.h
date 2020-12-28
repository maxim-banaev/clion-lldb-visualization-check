#pragma once

int check_basic_types() {
  int int_ = 12;
  double double_ = 12.3;
  float float_ = 12.3;
  char char_ = 'c';
  bool bool_ = true;
  void *void_ = nullptr;
  int int_a[12] = {1, 2};

  auto auto_int_ = 1;
  auto auto_double_ = 12.3;
  auto auto_char_ = 'c';
  auto auto_bool_ = true;
  auto auto_ptr_ = nullptr;

  return 0;
}
