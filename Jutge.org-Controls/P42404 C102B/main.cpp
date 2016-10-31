#include <iostream>

using namespace std;

int main() {
  cout.setf(ios::fixed);
  cout.precision(2);

  double x;
  string s;

  cin >> x >> s;

  if (s == "euros"){
    cout << (x*1.254) << " dolars" << endl;
  } else {
    cout << (x/1.254) << " euros" << endl;
  }

}