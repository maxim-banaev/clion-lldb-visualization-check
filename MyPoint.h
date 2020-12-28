//
// Created by jetbrains on 28.12.2020.
//

#ifndef LLDBVISUALIZATION_MYPOINT_H
#define LLDBVISUALIZATION_MYPOINT_H

class MyPoint {
  int x;
  int y;

public:
  bool operator<(const MyPoint &rhs) const;

  bool operator>(const MyPoint &rhs) const { return rhs < *this; }

  bool operator<=(const MyPoint &rhs) const { return !(rhs < *this); }

  bool operator>=(const MyPoint &rhs) const { return !(*this < rhs); }

public:
  MyPoint();
  MyPoint(int x, int y);
};

#endif // LLDBVISUALIZATION_MYPOINT_H
