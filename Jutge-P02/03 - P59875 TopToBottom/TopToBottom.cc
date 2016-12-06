#include <iostream>
using namespace std;

int main() {
  int a;
  int b;
  
  cin >> a >> b;
  
  
  if (a == b) {
    cout << b << endl;
  }
  
  else if (a > b) {
    for(int x = a; x >= b; x--){
      cout << x << endl;
    }
  }
  
  else if (b > a) {
    for(int x = b; x >= a; x--){
      cout << x << endl;
    }
  }
  
}