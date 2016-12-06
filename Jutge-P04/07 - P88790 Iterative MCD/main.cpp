#include <iostream>

using namespace std;

int gcd(int a, int b){
  int r;

  if (a < b){
    int aux;
    aux = a;
    a = b;
    b = aux;
  }

  while (b != 0){
    r = a % b;
    a = b;
    b = r;
  }

  return a;
}

int main() {
}