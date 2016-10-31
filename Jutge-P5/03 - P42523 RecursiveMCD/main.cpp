#include <iostream>

using namespace std;

int gcd(int a, int b){
  if (b > a){
    int aux;
    aux = a;
    a = b;
    b = aux;
  }

  if (a == 0 or b == 0){
    return a+b;
  }

  if (a % b == 0){
    return b;
  } else {
    return (gcd(b,(a%b)));
  }
}

int main() {
}