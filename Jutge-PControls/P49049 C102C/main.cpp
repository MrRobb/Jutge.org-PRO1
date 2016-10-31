#include <iostream>

using namespace std;

int main() {

  cout.setf(ios::fixed);
  cout.precision(2);

  double x;
  string s;

  cin >> x >> s;

  if (s == "milles"){
    cout << (x*1.6093) << " quilometres" << endl;
  } else {
    cout << (x/1.6093) << " milles" << endl;
  }

}