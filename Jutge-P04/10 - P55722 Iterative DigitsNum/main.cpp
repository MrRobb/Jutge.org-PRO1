#include <iostream>

using namespace std;

int number_of_digits(int n){
  if (n / 10 == 0){
    return 1;
  } else {
    return 1 + (number_of_digits(n/10));
  }
}

int main() {

  // Pre: n ≥ 1
  // Post digits

}