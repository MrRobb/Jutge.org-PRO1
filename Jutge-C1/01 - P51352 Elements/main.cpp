#include <iostream>

using namespace std;

int main() {

  char c1,c2;
  cin >> c1 >> c2;

  if (c1 == 'A' and c2 == 'A') cout << '-' << endl;
  else if (c1 == 'A' and c2 == 'P') cout << '1' << endl;
  else if (c1 == 'A' and c2 == 'V') cout << '2' << endl;
  else if (c1 == 'P' and c2 == 'P') cout << '-' << endl;
  else if (c1 == 'P' and c2 == 'A') cout << '2' << endl;
  else if (c1 == 'P' and c2 == 'V') cout << '1' << endl;
  else if (c1 == 'V' and c2 == 'V') cout << '-' << endl;
  else if (c1 == 'V' and c2 == 'A') cout << '1' << endl;
  else if (c1 == 'V' and c2 == 'P') cout << '2' << endl;
}