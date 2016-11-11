#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int n) {
  if (n <= 1) return false;
  int max = sqrt(n);
  for (int i = 2; i <= max; i++) {
    if (n%i == 0) return false;
  }
  return true;
}

int next_prime(int n){
  while(true){
    if (is_prime(++n)) return n;
  }
}

int main() {
  int n;
  while(cin >> n and is_prime(n)){
    cout << next_prime(n) << endl;
  }
}