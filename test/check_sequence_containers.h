#pragma once

#include <array>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>

// Sequence containers
//
// Sequence containers implement data structures which can be accessed
// sequentially.
//
// array: Static contiguous array (class template)
// vector: Dynamic contiguous array (class template)
// deque: Double-ended queue (class template)
// forward_list: Singly-linked list (class template)
// list : Doubly-linked list (class template)

using namespace std;

int check_sequence_containers() {

  array<int, 5> array_ = {1, 2, 3, 4, 5};
  vector<int> vector_;

  vector_.reserve(5);
  for (int j = 0; j < 7; ++j) {
    vector_.push_back(j);
  }
  vector_.pop_back();
  vector_.pop_back();

  deque<int> deque_;
  for (int i = 0; i < 7; ++i) {
    deque_.push_back(i + 1);
  }
  deque_.pop_back();
  deque_.pop_front();

  forward_list<int> forward_list_;
  forward_list_.assign({1, 2, 3, 4, 5});

  list<int> list_ = {1, 2, 3, 4, 5};

  auto initializer_list_ = {1, 2, 3, 4, 5};
  return 0;
}