#include <iostream>

using namespace std;

int main() {

  int n;

  while (cin >> n){ // Cada línea
    int max;

    for (int i = 0; i < n; i++){
      int valor;
      cin >> valor;
      if (i == 0) max = valor;
      else if (valor > max) max = valor;
    }

    cout << max << endl;
  }

}