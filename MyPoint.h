#pragma once

class MyPoint {
  int x;
  int y;

public:
  bool operator<(const MyPoint &rhs) const;

  bool operator>(const MyPoint &rhs) const { return rhs < *this; }

  bool operator<=(const MyPoint &rhs) const { return !(rhs < *this); }

  bool operator>=(const MyPoint &rhs) const { return !(*this < rhs); }

  MyPoint();
  MyPoint(int x, int y);
};
