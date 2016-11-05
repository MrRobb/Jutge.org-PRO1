#include <iostream>

using namespace std;

int main() {

  char c;

  int openclose = 0;

  while (cin >> c and openclose >= 0){
    if (c == '(') ++openclose;
    else if (c == ')') --openclose;
  }

  if (openclose == 0) cout << "yes" << endl;
  else cout << "no" << endl;

}