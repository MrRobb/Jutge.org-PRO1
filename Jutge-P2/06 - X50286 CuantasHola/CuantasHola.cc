#include <iostream>
using namespace std;

int main() {
  string a;
  int c = 0;
  
  while(cin >> a){
    if(a == "hola"){
      c++;
    }
  }
  
  cout << c << endl;
}