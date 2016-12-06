#include <iostream>

using namespace std;

int main() {

  int filas;
  int columnas;

  cin >> filas >> columnas;

  int value;

  for (int i = 1; i <= filas; i++){
    value = 1;
    for (int j = 1; j <= columnas; j++){
      if (i >= j){
        cout << (i - j)%10;
      } else {
        cout << (value)%10;
        value++;
      }
    }
    cout << endl;
  }

}