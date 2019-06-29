

#include <iostream>
#include <string>
#include <unordered_map>

#include "point.h"

using std::cout;
using std::endl;
using std::hash;
using std::string;
using std::unordered_map;

int main(int argc, char** argv) {
  // Attempt 1
  unordered_map<Point, string, HashPoint> table;
  Point p{1, 2};
  table[p] = "Minkowski";
  p.x = 3;
}
