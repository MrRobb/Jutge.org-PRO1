#include <iostream>

using namespace std;

void drawrusc(int filas, int columnas){
  for(int i = 1; i <= filas; ++i){
    for(int j = 1; j <= columnas; ++j){
      cout << "/ \\";
      if (j != columnas) cout << "_";
    }
    cout << endl;
    for(int k = 1; k <= columnas; ++k){
      cout << "\\_/";
      if (k != columnas) cout << " ";
    }
    cout << endl;
  }
}

int main() {

  int a,b;
  int j = 0;
  while (cin >> a >> b){
    if(j != 0) cout << endl;
    ++j;
    cout << ' ';
    for(int i = 1; i <= b; i++){
      cout << "_";
      if (i != b) cout << "   ";
    }
    cout << endl;
    drawrusc(a,b);
  }

}