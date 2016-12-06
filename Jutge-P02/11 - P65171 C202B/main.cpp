#include <iostream>
#include <cmath>

using namespace std;

int main() {

  cout.setf(ios::fixed);
  cout.precision(2);

  double n;
  cin >> n;

  double x;

  double sum1 = 0.00;
  double sum2 = 0.00;

  double result;

  for (int i = 1; i <= n; i++){
    cin >> x;
    sum1 = sum1 + pow(x,2);
    sum2 = sum2 + x;
  }

  result = (1 / (n-1) * (sum1)) - (1 / (n * (n - 1))) * pow(sum2, 2);

  cout << result << endl;

}