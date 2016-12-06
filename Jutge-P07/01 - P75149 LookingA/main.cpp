#include <iostream>

using namespace std;

int main() {
  char c;
  bool encontrado = false;

  cin >> c;
  while (c != '.'){
    if (c == 'a' and !encontrado) {
      encontrado = true;
      cout << "yes" << endl;
    }
    cin >> c;
  }
  if (!encontrado) cout << "no" << endl;
}