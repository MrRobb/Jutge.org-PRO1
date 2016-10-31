#include <iostream>

using namespace std;

int main() {
  // Pre: int > 0, that it is the nxn chess.
  // Post: chess nxn. black = 'x'. white = '.'

  int n;

  while(cin >> n) {

    // Para cada valor nxn
    for (int i = 1; i <= n; i++) {
      // imprime una fila
      for (int j = 1; j <= n; j++) {
        // imprime una columna, basandose en si es una posición par o impar, cambiando dependiendo de la linea en la que esté.
        if ((j + i) % 2 == 0) {
          cout << '.';
        } else {
          cout << 'x';
        }
      }
      cout << endl;
    }
    cout << endl;
  }

}