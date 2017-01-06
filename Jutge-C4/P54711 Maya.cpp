//
// Created by Roberto Ariosa Hernández on 6/1/17.
//

#include <iostream>

using namespace std;

void printmaya(int n){
  // Prints a digit between 0 and 19 in maya's style
  for(int i = 0; i < n%5; ++i) cout << '.';
  if(n%5 != 0) cout << endl;

  for(int i = 0; i < n/5; ++i) cout << "-----" << endl;
}

void base20(int n){
  // Calculate each of the digits of a decimal number in base 20
  if(n > 0){
    base20(n/20);
    if(n%20 == 0) cout << "zero" << endl;
    else printmaya(n%20);
  }
}

int main(){
  int n;
  while(cin >> n){
    cout << n << endl;
    if(n == 0) cout << "zero" << endl;
    else base20(n);
  }
}