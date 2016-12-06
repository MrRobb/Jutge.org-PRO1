#include <iostream>

using namespace std;

int main() {

  bool encontrado = false;
  int n;
  int position = 1;

  while (cin >> n and !encontrado){
    if (n%2 == 0) {
      cout << position << endl;
      encontrado = true;
    }
    position++;
  }

}