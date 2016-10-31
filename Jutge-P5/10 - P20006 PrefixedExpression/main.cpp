#include <iostream>

using namespace std;

int operate(char op){
  cin >> op;
  if ((int(op)-'0') < 0){
    if (op == '*') return operate(op) * operate(op);
    else if (op == '+') return operate(op) + operate(op);
    else return operate(op) - operate(op);
  } else {
    return int(op-'0');
  }
}

int main() {
  char op;
  cout << operate(op) << endl;
}