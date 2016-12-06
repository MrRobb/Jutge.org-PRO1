#include <iostream>

using namespace std;

int main() {
  int n, x;
  int i = 1;
  int r = 0;

  cin >> n;
  while (cin >> x and r == 0) {
    if (i == n) {
      ++r;
      i = x;
    }
    else ++i;
  }

  if (r == 1) cout << "At the position " << n << " there is a(n) " << i << "." << endl;
  else cout << "Incorrect position." << endl;
}