#include <iostream>
#include <cmath>

using namespace std;

int main() {
  cout.setf(ios::fixed);
  cout.precision(6);

  int n;
  while (cin >> n){
    cout << (int)pow(n,2) << " " << sqrt((double)n) << endl;
  }
}