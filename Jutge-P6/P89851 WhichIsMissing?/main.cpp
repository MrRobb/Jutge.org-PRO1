#include <iostream>
#include <vector>

using namespace std;

int main() {

  int n;
  while (cin >> n){

    int suma = 0;

    for (int i = 1; i <= n; i++){
      suma += i;
    }

    int valor;

    for (int j = 1; j < n; j++){
      cin >> valor;
      suma -= valor;
    }

    cout << suma << endl;

  }

}