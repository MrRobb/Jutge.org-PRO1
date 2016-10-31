#include <iostream>
#include <cmath>

using namespace std;

// define here additional functions and/or procedures
// if you need them
int digits(int n){
  int digits = 1;

  while (n >= 10) {
    digits++;
    n /= 10;
  }

  return digits;
}

// Pre: 0<=d<=9 and 0<=x.
void write_digit(int d,int x) {
  // insert here your (ITERATIVE) code
  // write a digit d  until i == x
  for (int i = 0; i < x; i++){
    cout << d;
  }
}

// Pre: 0<n.
void write_expanded(int n) {
  // insert here your (ITERATIVE) code
  // repeat the function until the n is lower than 10, when it's lower than 10 and you have
  // already written the first digit, write the next one.
  int digitsn = digits(n);
  for (int i = 1; i <= digitsn; i++){
    write_digit((n/(int)pow(10,digitsn-i))%10,((n/(int)pow(10,digitsn-i))%10)+1);
  }
}

int main() {
  int n;
  while (cin >> n) {
    write_expanded(n);
    cout << endl;
  }
}