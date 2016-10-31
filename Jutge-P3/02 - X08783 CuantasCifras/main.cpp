#include <iostream>
#include <cmath>

using namespace std;

int main() {

  int base;
  int num;
  int digitos;

  while (cin >> base >> num) {

    digitos = 0;

    for (int i = 0; (pow(base, i)) <= num; i++){
      digitos++;
    }

    cout << digitos << endl;
  }

}