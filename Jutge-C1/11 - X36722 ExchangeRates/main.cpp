#include <iostream>
#include <string>

using namespace std;

int main() {
  // Pre: and exchange rate and then, a sequence of values either in EUR or USD.
  // exchange, sequence of: value USD/EUR

  //Post: print the sum in EUR, print the sum in USD

  cout.setf(ios::fixed);
  cout.precision(4);

  double exchange;

  cin >> exchange;

  double a;
  string b;

  double sum;

  while (cin >> a >> b){

    if (b == "EUR"){
      // if it's EUR change to USD and add it to the sum variable
      sum += (a * exchange);
    } else {
      // if it's already USD, add it to the sum variable directly.
      sum += (a);
    }
  }

  // the sum is in USD so to write the EUR divide it by the exchange rate.
  // the write the sum (that is in USD already).
  cout << (sum / exchange) << " ";
  cout << (sum) << endl;

}