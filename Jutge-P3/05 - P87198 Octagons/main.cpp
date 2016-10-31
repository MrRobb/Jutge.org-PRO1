#include <iostream>

using namespace std;

int main() {

  int n;

  // Cada número
  while (cin >> n){

    int linea = 1;

    // Calcular total lineas
    int totallineas = (n * 2)+(n-2);;

    // Cada linea (falta rellenar condicion)
    while (linea <= totallineas){

      // Principio, Final y Medio
      if (linea <= (n-1)){

        for (int cs1 = 0; cs1 < (n-linea); cs1++){
          cout << " ";
        }

        for (int cx1 = 0; cx1 < (n + 2*(linea-1)); cx1++){
          cout << "X";
        }

        cout << endl;

      } else if (linea > (totallineas - (n - 1))){

        for (int cs3 = 0; cs3 < linea - (totallineas - (n - 1)); cs3++ ){
          cout << " ";
        }

        for (int cx3 = 0; cx3 < totallineas - 2*(linea - (totallineas - (n - 1))); cx3++){
          cout << "X";
        }

        cout << endl;

      } else if (linea > (n-1) and linea <= (totallineas - (n - 1))) {

        for (int cx2 = 0; cx2 < totallineas; cx2++){
          cout << "X";
        }

        cout << endl;

      }

      linea++;

    }

    // Añadir salto de línea
    cout << endl;

  }

}