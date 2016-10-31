#include <iostream>

using namespace std;

int main() {

  int n;
  int a;
  int sum = 0;
  cin >> n;
  cout << "nombres que acaben igual que " << n << ':' << endl;
  n = n%1000;

  while (cin >> a){
    if (a%1000 == n){
      sum++;
      cout << a << endl;
    }
  }

  cout << "total: " << sum << endl;

}