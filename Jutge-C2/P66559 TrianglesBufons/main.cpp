#include <iostream>

using namespace std;

// NOT FINISHED

void escriu_triangle(int t){
  int lineas = t*2;

  for (int linea = 1; linea <= lineas; linea++){

    for (int espai = lineas-linea; espai > 0; espai--){
      cout << ' ';
    }

    cout << '/';

    // Añadir que pasa despues de la primera barra

    cout << "\\" << endl;
  }
}

int main() {

  int x = 0;
  cin >> x;
  while (x > 0){
    escriu_triangle(x);
    cin >> x;
  }

}