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
double dist(const Point& a, const Point& b){
  return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}
void move(Point& p1, const Point& p2){
  p1.x += p2.x;
  p1.y += p2.y;
}
void move(Circle& c, const Point& p){
  // moves the circle to p
  move(c.center,p);
}
void scale(Circle& c, double sca){
  // scales c to sca (sca > 0)
  c.radius *= sca;
}

// Program
int relationship(const Circle& c1, const Circle& c2){
  double distance = dist(c1.center, c2.center);
  // 1: c1 inside c2
  if((distance+c1.radius) < c2.radius) return 1;

  // 2: c2 inside c1
  else if ((distance+c2.radius) < c1.radius) return 2;

  // 3: intersect
  else if ((  distance+c1.radius > c2.radius and distance-c1.radius < c2.radius)
           or(distance+c2.radius > c1.radius and distance-c2.radius < c1.radius)) return 3;

  // 0: otherwise
  else return 0;
}

void printsituation(int related){
  if (related == 1) cout << "the first circle is inside the second one" << endl;
  else if (related == 2) cout << "the second circle is inside the first one" << endl;
  else if (related == 3) cout << "circles intersect" << endl;
  else cout << "circles do not intersect" << endl;
}

int main() {
  Circle c1,c2;
  read(c1);
  read(c2);

  int related = relationship(c1,c2);
  printsituation(related);

  int circle;
  string action;

  while(cin >> circle >> action){
    if(action == "move"){
      Point paux;
      read(paux);
      if(circle == 1) move(c1,paux);
      if(circle == 2) move(c2,paux);
    } else {
      double aux;
      cin >> aux;
      if(circle == 1) scale(c1,aux);
      if(circle == 2) scale(c2,aux);
    }
    related = relationship(c1,c2);
    printsituation(related);
  }
}