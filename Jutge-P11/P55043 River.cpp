//
// Created by Roberto Ariosa Hernández on 28/12/16.
//

#include <iostream>

using namespace std;

int sumofdigits(int n){
  int sum = 0;
  while(n > 0){
    sum += n%10;
    n /= 10;
  }
  return sum;
}

void adduntil(int& n, int& one, int& three, int& nine){
  while(one < n){
    one += sumofdigits(one);
  }
  while(three < n){
    three += sumofdigits(three);
  }
  while(nine < n){
    nine += sumofdigits(nine);
  }
}

int encounter_of_rivers(int n){
  int one = 1;
  int three = 3;
  int nine = 9;

  adduntil(n,one,three,nine);

  while(true){
    if(one == n) return one;
    if(three == n) return three;
    if(nine == n) return nine;
    n += sumofdigits(n);
    adduntil(n,one,three,nine);
  }
}

int main(){
}