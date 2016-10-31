#include <iostream>

using namespace std;

int main() {
  int rect;
  int filas;
  int columnas;
  int num;

  cin >> rect >> filas >> columnas;

  for (int i = 1; i <= rect; i++){
    num = 10;
    for (int j = 1; j <= filas; j++){
      for (int x = 1; x <= columnas; x++){
        num -= 1;
        cout << num;
        if (num == 0) num = 10;
      }
      cout << endl;
    }
    if (i != rect) cout << endl;
  }
}