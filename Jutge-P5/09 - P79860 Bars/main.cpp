#include <iostream>

using namespace std;

void print(int n) {
  if (n == 1) cout << "*" << endl;
  else {
    for (int i = n; i > 0; --i) {
      for (int j = 0; j < i; ++j) cout << "*";
      cout << endl;
    }
    for (int i = 1; i < n; ++i) {
      print(i);
    }
  }
}
int main() {
  int n; cin >> n; print(n);
  return 0;
}