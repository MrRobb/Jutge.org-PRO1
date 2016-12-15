#include <iostream>
#include <cmath>


using namespace std;

struct Point {
  double x, y;
};
struct Circle {
  Point center;
  double radius;
};

double dist(const Point& a, const Point& b){
  return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

void move(Point& p1, const Point& p2){
  p1.x += p2.x;
  p1.y += p2.y;
}

bool is_inside(const Point& p, const Circle& c){
  // return if p is inside of c
  return dist(p,c.center) < c.radius;
}




void read(Point& p){
  // reads a x and a y
  cin >> p.x;
  cin >> p.y;
}

void read(Circle& c){
  // reads x, y and radius
  cin >> c.center.x >> c.center.y;
  cin >> c.radius;
}

int main(){
  // Read Circle c
  Circle c;
  read(c);

  // Read Point p
  Point p;
  read(p);

  // Number of steps;
  int n;
  cin >> n;
  bool inside = is_inside(p,c);

  // is initially inside?
  if (inside) cout << "initially inside" << endl;
  else cout << "initially outside" << endl;

  // Move and print
  Point input;
  for(int i = 0; i < n; ++i){

    // Move
    cin >> input.x >> input.y;
    move(p,input);

    // Print if p is inside c
    if (is_inside(p,c) != inside){
      if (inside) cout << "in the step " << i+1 << " has gone out" << endl;
      else cout << "in the step " << i+1 << " has gone in" << endl;
      inside = is_inside(p,c);
    }
  }
}