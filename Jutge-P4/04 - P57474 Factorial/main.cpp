#include <iostream>

using namespace std;

int factorial (int n){
  if (n == 0){
    return 1;
  }
  while (n > 1){
    n = n * factorial((n-1));
    return n;
  }
  return n;
}

int main(){
}