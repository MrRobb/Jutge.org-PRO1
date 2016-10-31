#include <iostream>

using namespace std;

int main() {

  int n;
  int initial;
  int digitos;
  cin >> n;

  initial = n;

  for (int i = 2; i <= 16; i++){
    digitos = 1;
    while (n >= i){
      ++digitos;
      n = n / i;
    }
    cout << "Base " << i << ": " << digitos << " cifras." << endl;
    n = initial;
  }

}