#include <array>
#include <deque>
#include <forward_list>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

class MyPoint {
  int x;
  int y;

public:
  MyPoint(int x, int y) : x(x), y(y) {}
};


using namespace std;

auto main() -> int {

  string string_ = "hello";

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

  array<int, 5> array_ = {1, 2, 3, 4, 5};
  vector<int> vector_ = {1, 2, 3, 4, 5};

  deque<int> deque_;
  for (int i = 0; i < 5; ++i) {
    deque_.push_back(i + 1);
  }

  forward_list<int> forward_list_;
  forward_list_.assign({1, 2, 3, 4, 5});

  list<int> list_ = {1, 2, 3, 4, 5};

  // Associative containers
  //
  // Associative containers implement sorted data structures that can be quickly
  // searched (O(log n) complexity).
  //
  // Set: Collection of unique keys, sorted by keys
  // Map: Collection of key-value pairs, sorted by keys, keys are unique (class template).
  // multiset: Collection of keys, sorted by keys (class template)
  // multimap: Collection of key-value pairs, sorted by keys

  set<int, greater<>> set_;
  for (int x = 0; x < 5; ++x) {
    set_.insert(x + 1);
  }

  multiset<int, greater<>> multiset_;
  for (int x = 0; x < 5; ++x) {
    multiset_.insert(x + 1);
  }

  map<string, double> map_{{"pi", 3.14}, {"e", 2.71}, {"c", 300'000}};

  multimap<string, double> multimap_;
  multimap_.insert(pair<string, double>("pi", 3.14));
  multimap_.insert(pair<string, double>("e", 2.71));
  multimap_.insert(pair<string, double>("c", 300'000));

  // Unordered associative containers
  //
  // Unordered associative containers implement unsorted (hashed) data
  // structures that can be quickly searched (O(1) amortized, O(n) worst-case
  // complexity).
  //
  // unordered_set: Collection of unique keys, hashed by keys. (class template)
  // unordered_map: Collection of key-value pairs, hashed by keys, keys are unique. (class template)
  // unordered_multiset: Collection of keys, hashed by keys (class template)
  // unordered_multimap: Collection of key-value pairs, hashed by keys (class template)

  unordered_set<string> unordered_set_;
  unordered_set_.insert("pi");
  unordered_set_.insert("e");
  unordered_set_.insert("c");

  unordered_map<string, double> unordered_map_;
  unordered_map_["pi"] = 3.14;
  unordered_map_["e"] = 2.71;
  unordered_map_["c"] = 300'000;

  unordered_multiset<int> unordered_multiset_({1, 2, 1, 3, 2, 4, 3, 5});

  unordered_multimap<string, double> unordered_multimap_(
      {{"pi", 3.14}, {"e", 2.71}, {"c", 300'000}});

  // Container adaptors
  //
  // Container adaptors provide a different interface for sequential containers.
  //
  // stack: Adapts a container to provide stack (LIFO data structure) (class template).
  // queue: Adapts a container to provide queue (FIFO data structure) (class template).
  // priority_queue: Adapts a container to provide priority queue (class template).

  stack<int> stack_;
  for (int x = 0; x < 5; ++x) {
    stack_.push(x + 1);
  }

  queue<int> queue_;
  for (int x = 0; x < 5; ++x) {
    queue_.push(x + 1);
  }

  priority_queue<int> priority_queue_;
  for (int x = 0; x < 5; ++x) {
    priority_queue_.push(x + 1);
  }

  MyPoint mypoint_{1,2};
  MyPoint mypoint_zero{0,0};
  std::vector<MyPoint> vector_of_points = {{1,1}};

  return 0;
}