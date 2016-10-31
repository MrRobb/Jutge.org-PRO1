#include <iostream>

using namespace std;

int main() {
  cout.setf(ios::fixed);
  cout.precision(4);

  double a = 0;
  double x = 0;
  double result = 0;

  cin >> x;

  while (cin >> a){
    result = (result*x) + a;
  }

  cout << result << endl;

}