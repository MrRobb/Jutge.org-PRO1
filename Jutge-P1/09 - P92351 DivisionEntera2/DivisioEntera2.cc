#include <iostream>
using namespace std;
int main() {
  int a,b;
  cin >> a >> b;
  int d,r;
  
  d = a/b;
  
  if (a%b < 0) {
    r = b + (a%b);
    
    if (a/b < 0){
      d = (a/b - 1);
    }
  }
  
  else {
    r = a%b;
  }
  
  
  cout << d << ' ' << r << endl;
}