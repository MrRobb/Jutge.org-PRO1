#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main() {
  cout.setf(ios::fixed);
  cout.precision(6);
  
  int n;
  int c = 0;
  cin >> n;
  
  string type;
  double a;
  double b;
  double r;
  
  while(c < n){
    cin >> type;
    
    if ((type) == "rectangle"){
      cin >> a >> b;
      cout << (a*b) << endl;
    }
    
    if ((type) == "circle"){
      cin >> r;
      cout << (M_PI * pow(r,2)) << endl;
    }
    
    c++;
  }
}