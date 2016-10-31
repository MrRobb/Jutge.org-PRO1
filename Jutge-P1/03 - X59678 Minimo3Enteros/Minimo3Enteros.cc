#include <iostream>
using namespace std;
int main() {
  int a,b,c, m;
  cin >> a >> b >> c;
  
  if (a < b) {
    m = a;
  } 
  else {
    m = b;
  }
  if (c < m) {
    m = c;
  }
  cout << m << endl;
}