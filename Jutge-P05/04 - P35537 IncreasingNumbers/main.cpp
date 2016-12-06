#include <iostream>

using namespace std;

bool is_increasing(int n){
  if (n <= 100){
    return (n % 10 >= (n % 100) / 10);
  } else {
    if (n%10 >= (n%100)/10){
      return is_increasing(n/10);
    } else {
      return false;
    }
  }
}

int main() {
}