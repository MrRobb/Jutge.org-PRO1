#include <iostream>

using namespace std;

int double_factorial(int n){
  if (n < 2){
    return 1;
  } else {
    return n * double_factorial(n-2);
  }
}


int main() {
}