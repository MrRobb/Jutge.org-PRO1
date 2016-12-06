#include <iostream>

using namespace std;

int main() {

  cout.setf(ios::fixed);
  cout.precision(4);

  int n;
  double r = 0.000000;
  cin >> n;

  if (n == 0){
    r = 0.000000;
  }

  else {
    for(int i = 1; i <= n; i++ ){
      r = r + (1.000000 / i);
    }
  }

  cout << r << endl;

}