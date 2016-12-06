#include <iostream>

using namespace std;

bool is_palindromic(int n){

  int reverse = 0;
  int initialn = n;

  while (n > 0){
    reverse = (reverse*10) + (n % 10);
    n = n / 10;
  }

  if (initialn == reverse){
    return true;
  } else {
    return false;
  }
}

int main() {

  // Pre: natural number
  // Post: Palindromic or not (bool)

  int n = 1;

  while (n > 0){
    cin >> n;
    cout << is_palindromic(n) << endl;
  }

}