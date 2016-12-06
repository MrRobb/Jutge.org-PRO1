#include <iostream>

using namespace std;

int main() {

  int x;
  int n;
  int result = 0;

  cin >> x;

  while (cin >> n){
    if (n % x == 0){
      result++;
    }

  }

  cout << result << endl;

}