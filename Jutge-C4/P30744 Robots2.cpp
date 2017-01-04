//
// Created by Roberto Ariosa Hernández on 4/1/17.
//

#include <iostream>
#include <vector>

using namespace std;

struct Position {
  int x,y;
};

typedef vector< vector<bool> > Matrix;

void printpos(Position p){
  cout << '(' << p.x << ", " << p.y << ')' << endl;
}

int main(){
  int rows, columns;
  cin >> rows >> columns;
  Matrix m(rows, vector<bool> (columns,false));

  Position p;
  cin >> p.x >> p.y;
  m[p.x-1][p.y-1] = true;
  printpos(p);

  string s;
  bool correct = true;
  bool out = false;
  bool repeated = false;

  while(correct and !out and !repeated and cin >> s){
    if(s == "up"){
      if(p.x-1 < 1) out = true;
      else --p.x;
    } else if (s == "down"){
      if(p.x+1 > rows) out = true;
      else ++p.x;
    } else if (s == "left"){
      if(p.y-1 < 1) out = true;
      else --p.y;
    } else if (s == "right"){
      if(p.y+1 > columns) out = true;
      else ++p.y;
    } else correct = false;

    if(m[p.x-1][p.y-1] == true and correct) repeated = true;
    else m[p.x-1][p.y-1] = true;
    if(correct and !out and !repeated) printpos(p);
  }

  if(!correct) cout << "incorrect order" << endl;
  else if(out) cout << "out of bounds" << endl;
  else cout << "repeated position" << endl;

}