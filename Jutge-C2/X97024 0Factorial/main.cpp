#include <iostream>
#include <cmath>

using namespace std;

int nzeros_fact(int x){
  int sum = 0;
  for (int i = 1; x > pow(5,i); i++){
    sum += (x / pow(5,i));
  }
  return sum;
}

int main() {}