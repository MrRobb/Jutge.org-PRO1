#include <iostream>
#include <cmath>

using namespace std;

int main() {
  cout.setf(ios::fixed);
  cout.precision(4);

  double x;
  double c;
  int i = 0;
  double result = 0;

  cin >> x;

  while (cin >> c){
    result += c * pow(x,i);
    i++;
  }

  cout << result << endl;

}