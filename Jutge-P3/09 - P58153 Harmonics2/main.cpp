#include <iostream>

using namespace std;

int main() {
  cout.setf(ios::fixed);
  cout.precision(10);

  int n;
  int m;

  while (cin >> n >> m){
    double sub = 0;
    m++;
    while (m <= n) {
      sub += (double) 1 / m;
      m++;
    }
    cout << sub << endl;
  }
}