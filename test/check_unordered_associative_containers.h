#pragma once

#include <unordered_set>
#include <unordered_map>

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

using namespace std;

int check_unordered_associative_containers() {
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
  return 0;
}