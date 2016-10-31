#include <iostream>

using namespace std;

int main() {

  char a;
  cin >> a;

  if (isalpha(a)) {
    if (a == toupper(a)){
      cout << "Letra mayuscula" << endl;
    } else {
      cout << "Letra minuscula" << endl;
    }
  } else {
    cout << "Numero" << endl;
  }
}