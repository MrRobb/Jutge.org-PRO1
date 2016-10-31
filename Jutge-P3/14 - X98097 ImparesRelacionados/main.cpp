#include <iostream>

using namespace std;

int main() {

  unsigned long long n;
  long long impar = 1;

  long impares = 0;
  long pares = 0;

  cin >> n;

  while (n >= 10){
    if (impar % 2 != 0){
      impares += (n % 10);
      impar++;
      n /= 10;
    } else {
      pares += (n % 10);
      impar++;
      n /= 10;
    }
  }

  if (impar % 2 != 0){
    impares += (n % 10);
    impar++;
    n /= 10;
  } else {
    pares += (n % 10);
    impar++;
    n /= 10;
  }


  cout << impares << ' ' << pares << endl;

  if (impares == 0 or pares == 0){
    if (impares > pares){
      cout << pares << " = " << '0' << " * " << impares << endl;
    } else {
      cout << impares << " = " << '0' << " * " << pares << endl;
    }
  } else if (impares % pares == 0){
    cout << impares << " = " << (impares / pares) << " * " << pares << endl;
  } else if (pares % impares == 0){
    cout << pares << " = " << (pares / impares) << " * " << impares << endl;
  } else {
    cout << "ninguna" << endl;
  }

}
