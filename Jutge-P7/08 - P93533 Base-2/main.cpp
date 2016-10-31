#include <iostream>
#include <cmath>

// NOT FINISHED (YET)

using namespace std;

int digitos(int n){
  n = abs(n);
  int digitos = 1;
  for (int i = 0; pow(2,i) < n; i++) digitos++;
  return digitos;
}

int base2(){
  
}

int main() {

  int n;
  cin >> n;
  cout << base2();

}