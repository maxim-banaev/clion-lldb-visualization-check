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

  array<int, 6> array_ = {1, 2, 3, 4, 5, 6};
  vector<int> vector_ = {1, 2, 3};

  deque<int> deque_;
  deque_.push_back(10);

  forward_list<int> forward_list_;
  forward_list_.assign({1, 2, 3});

  list<int> list_ = {1, 2, 3};

  // Associative containers
  //
  // Associative containers implement sorted data structures that can be quickly
  // searched (O(log n) complexity).
  //
  // Set: Collection of unique keys, sorted by keys
  // Map: Collection of key-value pairs, sorted by keys, keys are unique (class
  // template). multiset: Collection of keys, sorted by keys (class template)
  // multimap: Collection of key-value pairs, sorted by keys

  set<int, greater<>> set_;
  set_.insert(40);

  multiset<int, greater<>> multiset_;
  multiset_.insert(40);

  map<string, double> map_{{"pi", 3.14}, {"e", 2.71}, {"c", 300'000}};

  multimap<int, int> multimap_;
  multimap_.insert(pair<int, int>(1, 40));

  // Unordered associative containers
  //
  // Unordered associative containers implement unsorted (hashed) data
  // structures that can be quickly searched (O(1) amortized, O(n) worst-case
  // complexity).
  //
  // unordered_set: Collection of unique keys, hashed by keys. (class template)
  // unordered_map: Collection of key-value pairs, hashed by keys, keys are
  // unique. (class template) unordered_multiset: Collection of keys, hashed by
  // keys (class template) unordered_multimap: Collection of key-value pairs,
  // hashed by keys (class template)

  unordered_set<string> unordered_set_;
  unordered_set_.insert("code");

  unordered_map<string, int> unordered_map_;
  unordered_map_["GeeksforGeeks"] = 10;

  unordered_multiset<int> unordered_multiset_({1, 3, 1, 7, 2, 3, 4, 1, 6});

  unordered_multimap<string, int> unordered_multimap_({{"apple", 1},
                                                       {"ball", 2},
                                                       {"apple", 10},
                                                       {"cat", 7},
                                                       {"dog", 9},
                                                       {"cat", 6},
                                                       {"apple", 1}});

  // Container adaptors
  //
  // Container adaptors provide a different interface for sequential containers.
  //
  // stack: Adapts a container to provide stack (LIFO data structure) (class
  // template). queue: Adapts a container to provide queue (FIFO data structure)
  // (class template). priority_queue: Adapts a container to provide priority
  // queue (class template).

  stack<int> stack_;
  stack_.push(10);

  queue<int> queue_;
  queue_.push(10);

  priority_queue<int> priority_queue_;
  priority_queue_.push(10);
  return 0;
}