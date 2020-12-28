#pragma once

#include <array>
#include <list>
#include <forward_list>
#include <unordered_map>

using namespace std;

enum class Number { One, Two };

int check_custom_types() {

  Number mynumber = Number::One;

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

  return 0;
}
