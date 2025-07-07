#include "MyPoint.h"

bool MyPoint::operator<(const MyPoint &rhs) const {
  if (x < rhs.x)
    return true;
  if (rhs.x < x)
    return false;
  return y < rhs.y;
}

MyPoint::MyPoint() : x(0), y(0) {}
MyPoint::MyPoint(int x, int y) : x(x), y(y) {}
