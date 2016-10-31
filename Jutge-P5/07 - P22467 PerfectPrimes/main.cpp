#include <iostream>

using namespace std;

int suma_digitos(int n) {
  if (n < 10) return n;
  return n%10 + suma_digitos(n/10);
}

bool is_prime(int n) {
  if (n <= 1) return false;
  for (int i = 2; i*i <= n; i++) {
    if (n%i == 0) return false;
  }
  return true;
}

bool is_perfect_prime(int n) {
  if (n < 10) return is_prime(n);
  return is_prime(n) and is_perfect_prime(suma_digitos(n));
}

int main() {
}