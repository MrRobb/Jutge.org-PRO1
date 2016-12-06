#include <iostream>
#include <cmath>

using namespace std;

struct Point {
  double x, y;
};

double dist(const Point& a, const Point& b){
  return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

int main() {
}