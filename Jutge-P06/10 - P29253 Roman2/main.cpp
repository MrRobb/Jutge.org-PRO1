#include <iostream>

using namespace std;

int roman(char c){
  if (c == 'M') return 1000;
  else if (c == 'D') return 500;
  else if (c == 'C') return 100;
  else if (c == 'L') return 50;
  else if (c == 'X') return 10;
  else if (c == 'V') return 5;
  else if (c == 'I') return 1;
  else return 0;
}

int main() {

  string s;

  while (cin >> s) {
    int sum = 0;
    int num1 = 0;
    int num2 = 0;
    for (int i = 0; i < s.size() - 1; i++) {
      num1 = num2;
      num2 = roman(s[i]);

      if (num2 > num1) {
        sum += num2 - 2 * num1;
      } else {
        sum += num2;
      }
      cout << s[i];
    }

    cout << " = " << sum << endl;
  }
}