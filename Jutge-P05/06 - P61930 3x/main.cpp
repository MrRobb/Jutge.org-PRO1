#include <iostream>

using namespace std;

int sum_of_digits(int n){
  if (n <= 0){
    return 0;
  } else {
    return (n%10) + (sum_of_digits(n/10));
  }
}

bool is_multiple_3(int n){
  int x = sum_of_digits(n);
  if (x == 3){
    return true;
  } else if (x == 6){
    return true;
  } else if (x == 9){
    return true;
  } else if (x >= 10){
    return is_multiple_3(x);
  } else {
    return false;
  }
}

int main() {
}