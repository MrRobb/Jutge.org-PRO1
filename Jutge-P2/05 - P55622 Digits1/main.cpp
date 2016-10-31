#include <iostream>

using namespace std;

int main() {

  unsigned long int n;
  unsigned long long int ni;
  unsigned long long int digits = 1;
  cin >> ni;
  n = ni;


  while (n >= 10) {
    digits++;
    n /= 10;
  }

  cout << "The number of digits of " << ni << " is " << digits << '.' << endl;

}