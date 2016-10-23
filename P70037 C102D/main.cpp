#include <iostream>

using namespace std;

int main() {
  cout.setf(ios::fixed);
  cout.precision(3);

  double x;
  double y;

  cin >> x >> y;

  if (y == 0){
    cout << "divisio per zero" << endl;
  } else {
    cout << x/y << ' ' << (int)x/(int)y << ' ' << (int)x%(int)y << endl;
  }


}