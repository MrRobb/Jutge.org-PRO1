#include <iostream>
using namespace std;
int main() {
  int a,b,m;
  cin >> a >> b;
  
  if (a < b) {
    m = a;
  } 
  else {
    m = b;
  }
  
  cout << m << endl;
}