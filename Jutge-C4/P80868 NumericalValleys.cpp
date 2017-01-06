//
// Created by Roberto Ariosa Hernández on 6/1/17.
//

#include <iostream>

using namespace std;

int number_of_digits(int n){
  // Returns the digit of a number n >= 0
  if(n >= 10){
    return 1+number_of_digits(n/10);
  } else return 1;
}

int main(){
  int s;
  int rows;

  cin >> s >> rows;

  for(int i = 0; i < rows; ++i){    // For each row

    // Print s as many times as needed
    for(int j = 0; j <= i; ++j){
      if(j != 0) cout << '-' << s;
      else cout << s;
    }

    // Print as many dots as needed
    int digits = number_of_digits(s);
    int dots = 1 + 2*(rows-i-1)*(digits+1);
    for(int j = 0; j < dots; ++j){
      cout << '.';
    }

    // Print s as many times as needed
    for(int j = 0; j <= i; ++j){
      if(j != 0) cout << '-' << s;
      else cout << s;
    }

    cout << endl;
  }
}