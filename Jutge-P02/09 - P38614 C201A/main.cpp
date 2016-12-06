#include <iostream>
using namespace std;

int main() {

  long long int n;
  long long int in;
  long long int sum = 0;
  string cool;

  cin >> n;

  in = n;

  while (n >= 10){
    sum = sum + (n % 10);
    n = n / 100;
  }

  if (n < 10){
    sum = sum + n;
  }

  if ((sum % 2) == 0){
    cool = " IS COOL";
  } else {
    cool = " IS NOT COOL";
  }

  cout << in << cool << endl;

}