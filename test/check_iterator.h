#pragma once

#include <list>
#include <iostream>

using namespace std;

int check_iterator() {
  std::list<int> ml = {100, 200};


  for (auto it = ml.begin(); it != ml.end(); it++) {
    std::cout << *it << std::endl;
  }
  for (auto rit = ml.rbegin(); rit != ml.rend(); rit++) {
    std::cout << *rit << std::endl;
  }
  return 0;
}