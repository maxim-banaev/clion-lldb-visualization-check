#include <array>
#include <deque>
#include <forward_list>
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
  bool operator<(const MyPoint &rhs) const {
    if (x < rhs.x)
      return true;
    if (rhs.x < x)
      return false;
    return y < rhs.y;
  }

  bool operator>(const MyPoint &rhs) const { return rhs < *this; }

  bool operator<=(const MyPoint &rhs) const { return !(rhs < *this); }

  bool operator>=(const MyPoint &rhs) const { return !(*this < rhs); }

public:
  MyPoint() : x(0), y(0) {}

  MyPoint(int x, int y) : x(x), y(y) {}
};

using namespace std;

auto main() -> int {

#pragma region Basics types
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
#pragma endregion

#pragma region Smart Pointers
#pragma endregion

#pragma region STL Containers
  string string_ = "hello";
  string &string_ref_ = string_;
  string *string_ptr_ = &string_;

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

#pragma endregion

#pragma region Custom type
  MyPoint mypoint_{1, 2};
  MyPoint mypoint_zero{0, 0};

  std::vector<MyPoint> vector_of_points = {mypoint_zero, mypoint_};

  // array<MyPoint, 2> array_of_points = {mypoint_zero, mypoint_};
  array<MyPoint, 2> array_of_points = {mypoint_zero, mypoint_};

  deque<MyPoint> deque_of_points;
  deque_of_points.push_back(mypoint_zero);
  deque_of_points.push_back(mypoint_);

  forward_list<MyPoint> forward_list_of_points;
  forward_list_of_points.assign({mypoint_zero, mypoint_});

  list<MyPoint> list_of_points = {mypoint_zero, mypoint_};

  set<MyPoint, greater<>> set_of_points;
  set_of_points.insert(mypoint_zero);
  set_of_points.insert(mypoint_);

  multiset<MyPoint, greater<>> multiset_of_points;
  multiset_of_points.insert(mypoint_zero);
  multiset_of_points.insert(mypoint_);

  map<int, MyPoint> map_of_points{{0, mypoint_zero}, {1, mypoint_}};

  multimap<int, MyPoint> multimap_of_points;
  multimap_of_points.insert(pair<int, MyPoint>(0, mypoint_zero));
  multimap_of_points.insert(pair<int, MyPoint>(2, mypoint_));

  // unordered_set<MyPoint> unordered_set_of_points;
  // unordered_set_of_points.insert(mypoint_);

  unordered_map<int, MyPoint> unordered_map_of_points;
  unordered_map_of_points[0] = mypoint_;

  // unordered_multiset<MyPoint> unordered_multiset_of_points({mypoint_zero, mypoint_});
  unordered_multimap<int, MyPoint> unordered_multimap_of_points({{0, mypoint_zero}, {1, mypoint_}});

  stack<MyPoint> stack_of_points;
  stack_of_points.push(mypoint_zero);
  stack_of_points.push(mypoint_);

  queue<MyPoint> queue_of_points;
  queue_of_points.push(mypoint_zero);
  queue_of_points.push(mypoint_);

  priority_queue<MyPoint> priority_queue_of_points;
  priority_queue_of_points.push(mypoint_zero);
  priority_queue_of_points.push(mypoint_);
#pragma endregion

  return 0;
}