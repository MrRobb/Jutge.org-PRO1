#include <iostream>
#include <cmath>

using namespace std;

int main() {

  cout.setf(ios::fixed);
  cout.precision(6);

  double n;

  while (cin >> n){
    cout << sin(n * M_PI / 180) << " " << cos(n * M_PI / 180) << endl;
  }

}