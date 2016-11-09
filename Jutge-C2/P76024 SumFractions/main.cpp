#include <iostream>

using namespace std;

int main() {
  cout.setf(ios::fixed);
  cout.precision(4);

  double a,b,k;

  while (cin >> a >> b >> k){
    double x = 0;
    for (double i = 0; (a + i*k) <= b; i++){
      x += 1/(a + i*k);
    }
    cout << x << endl;
  }

}