#include <iostream>
#include <cmath>

using namespace std;

int main() {

  int base;
  cin >> base;

  int num;
  int ininum;
  char hexa[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
  string s;


  while (cin >> num){
    s = "";
    ininum = num;

    int sum = 0;
    while (num > 0){
      sum += num % base;
      s = hexa[(num % base)] + s;
      num /= base;
    }

    cout << ininum << ": " << sum << endl;

  }

}