#include <iostream>

using namespace std;

int main() {

  char c;
  cin >> c;
  if (isalpha(c)) cout << "lletra" << endl;
  else if ( 47 < c and c < 58 ) cout << "digit" << endl;
  else cout << "res" << endl;

}