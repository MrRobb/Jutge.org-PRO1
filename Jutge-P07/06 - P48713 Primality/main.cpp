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

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    if (is_prime(x)) cout << x << " is prime" << endl;
    else cout << x << " is not prime" << endl;
  }
}

