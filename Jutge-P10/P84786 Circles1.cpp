#include <iostream>
#include <cmath>

using namespace std;

struct Point {
  double x, y;
};

double dist(const Point& a, const Point& b){
  return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

struct Circle {
  Point center;
  double radius;
};

// Code

void move(Point& p1, const Point& p2){
  p1.x += p2.x;
  p1.y += p2.y;
}

void scale(Circle& c, double sca){
  // scales c to sca (sca > 0)
  c.radius *= sca;
}

void move(Circle& c, const Point& p){
  // moves the circle to p
  move(c.center,p);
}

bool is_inside(const Point& p, const Circle& c){
  // return if p is inside of c
  return dist(p,c.center) < c.radius;
}

int main(){

}