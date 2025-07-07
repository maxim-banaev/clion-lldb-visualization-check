#pragma once

#include <list>
#include <iostream>
#include <ranges>

using namespace std;

inline int check_iterator() {
  std::list ml = {100, 200};


  for (const int & it : ml) {
    std::cout << it << std::endl;
  }
  for (const int & rit : std::ranges::reverse_view(ml)) {
    std::cout << rit << std::endl;
  }
  return 0;
}