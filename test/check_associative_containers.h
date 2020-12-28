#pragma once

#include <string>
#include <set>
#include <map>

// Associative containers
//
// Associative containers implement sorted data structures that can be quickly
// searched (O(log n) complexity).
//
// Set: Collection of unique keys, sorted by keys
// Map: Collection of key-value pairs, sorted by keys, keys are unique (class template).
// multiset: Collection of keys, sorted by keys (class template)
// multimap: Collection of key-value pairs, sorted by keys

using namespace std;

int check_associative_containers() {
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

  return 0;
}