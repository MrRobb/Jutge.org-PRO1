//
// Created by Roberto Ariosa Hernández on 2/1/17.
//

#include <iostream>
#include <string>

using namespace std;

// Represents a point by its coordinates x,y.
struct Point {
  int x,y;
};

// Reads a point from the standard input and returns it.
Point read_point()
{
  Point p;
  cin>>p.x>>p.y;
  return p;
}

// Represents a rectangle by the positions its horizontal limits xmin<xmax
// and the positions of its vertical limits ymin<ymax.
struct Rectangle {
  int xmin,ymin,xmax,ymax;
};

// Reads a rectangle from the input and returns it. Assumes that the input format is correct, i.e. xmin<xmax and ymin<ymax.
Rectangle read_rectangle()
{
  Rectangle r;
  cin>>r.xmin>>r.ymin>>r.xmax>>r.ymax;
  return r;
}

// Returns "inside", "border" or "outside" depending on whether
// p is inside, at the border, or outside of r.
string containtment(Point p,Rectangle r)
{
  if(r.xmin < p.x and p.x < r.xmax and r.ymin < p.y and p.y < r.ymax) return "inside";
  else if(p.x > r.xmax or p.x < r.xmin or p.y > r.ymax or p.y < r.ymin) return "outside";
  else return "border";
}

int main()
{
  int n;
  cin >> n;
  for(int i = 0; i < n; ++i){
    Point p = read_point();
    Rectangle r = read_rectangle();
    cout << containtment(p,r) << endl;
  }
}