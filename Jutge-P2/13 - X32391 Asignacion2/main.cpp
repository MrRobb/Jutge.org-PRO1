#include <iostream>
using namespace std;


int main() {

  // defino las variables de entrada.
  int gastosFijos;
  int ahorros;
  int semanas;

  // defino la variable que se irá actualizando cada semana.
  int extra;
  int resul;

  // recojo la situación inicial.
  cin >> gastosFijos >> ahorros >> semanas;

  // actualizo y compruebo si es positivo el estado de los ahorros, según la asignacion de esa semana.
  for (int i = 0; i < semanas; i++){
    cin >> extra;

    ahorros = ahorros + extra - gastosFijos;

    // si los ahorros son positivos aumento el número de semanas con resultado positivo.
    if (ahorros > 0){
      resul++;
    }

  }

  cout << resul << endl;

}