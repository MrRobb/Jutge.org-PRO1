#include <iostream>
#include <cmath>

using namespace std;

int digitos(int n){
  n = abs(n);
  int digitos = 1;
  for (int i = 0; pow(2,i) < n; i++) digitos++;
  return digitos;
}

int base2(int n, string& cambiado, int weight, int digitos){
  if (n != 0 and weight <= digitos){
    if (n%-2 == 0){
      cambiado += '0';
      base2(n/-2, cambiado, ++weight, digitos);
    } else if (n%-2 == 1){
      cambiado += '1';
      base2(n/-2, cambiado, ++weight, digitos);
    } else if (n%-2 == -1){
      cambiado += '1';
      base2((n)/(-2) + 1, cambiado, ++weight, digitos);
    }
  }
  return n;
}

int main() {

  int n;
  while(cin >> n){

    int weight = 0;
    string cambiado;
    if (n == 0) cambiado = "0";
    else {
      base2(n, cambiado, weight, digitos(n));
    }

    cout << n << ": ";

    for (int i = int(cambiado.size())-1; i>=0 ; i--) cout << cambiado[i];
    cout << endl;
  }

}