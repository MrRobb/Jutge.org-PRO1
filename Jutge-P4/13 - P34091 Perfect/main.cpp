#include <iostream>
#include <cmath>

using namespace std;

bool is_perfect(int n){
  int sum = 0;

  for (int i = 1; i <= (sqrt(n)); i++){
    if (n % i == 0){
      if (i != n){
        sum += i;
        if (i != (n / i) and (n/i) != n) {
          sum += (n / i);
        }
      }
    }
  }

  return (n != 0 and sum == n);
}

int main() {
}