#include <iostream>

using namespace std;

bool three_equal_consecutive_digits(int n, int b){
  if(n%b == (n/b)%b and n != 0 and (n/b)%b == ((n/b)/b)%b) return true;
  else {
    if (n != 0) return three_equal_consecutive_digits(n/b,b);
    else return false;
  }
}

int main() {
}