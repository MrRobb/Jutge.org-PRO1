#include <iostream>

using namespace std;

struct Clock {
  int h;      // hours (0<=h<24)
  int m;      // minutes (0<=m<60)
  int s;      // seconds (0<=s<60)
};

Clock midnight(){
  Clock clock1;
  clock1.h = 0;
  clock1.m = 0;
  clock1.s = 0;
  return clock1;
}

void increase(Clock& r){
  if(r.s == 59){        // XX:XX:59
    if(r.m == 59){      // XX:59:59
      if(r.h == 23){    // 23:59:59
        r.h = 0;
        r.m = 0;
        r.s = 0;
      } else {
        ++r.h;
        r.m = 0;
        r.s = 0;
      }
    } else {
      ++r.m;
      r.s = 0;
    }
  } else {
    ++r.s;
  }
}

void print(const Clock& r){
  // Print hour
  if(r.h < 10) cout << '0';
  cout << r.h << ':';

  // Print min
  if(r.m < 10) cout << '0';
  cout << r.m << ':';

  // Print sec
  if(r.s < 10) cout << '0';
  cout << r.s;

  cout << endl;
}

int main(){
}