#pragma once

#include <stack>
#include <queue>

// Container adaptors
//
// Container adaptors provide a different interface for sequential containers.
//
// stack: Adapts a container to provide stack (LIFO data structure) (class template).
// queue: Adapts a container to provide queue (FIFO data structure) (class template).
// priority_queue: Adapts a container to provide priority queue (class template).

using namespace std;

inline int check_container_adaptors() {

  stack<int> stack_;
  for (int x = 0; x < 7; ++x) {
    stack_.push(x + 1);
  }
  stack_.pop();
  stack_.pop();

  queue<int> queue_;
  for (int x = 0; x < 7; ++x) {
    queue_.push(x + 1);
  }
  queue_.pop();
  queue_.pop();

  priority_queue<int> priority_queue_;
  for (int x = 0; x < 7; ++x) {
    priority_queue_.push(x + 1);
  }
  priority_queue_.pop();
  priority_queue_.pop();
  return 0;
}