#include <iostream>
#include <vector>

using namespace std;

// Defino el tipo Matrix para mejor legibilidad
// También la puedes declarar vector<vector<int>> nombre(filas,vector(columnas));
typedef vector<int> Row;
typedef vector<Row> Matrix;

// Imprime una fila
void printrow(const Matrix& m, int row){
  int size = m[0].size();
  cout << "row " << row << ": ";
  for (int i = 0; i < size; ++i){
    if(i != 0) cout << ' ' << m[row-1][i];
    else cout << m[row-1][i];
  }
  cout << endl;
}

// Imprime una columna
void printcolumn(const Matrix& m, int column){
  int size = m.size();
  cout << "column " << column << ": ";
  for (int i = 0; i < size; ++i){
    if(i != 0) cout << ' ' << m[i][column-1];
    else cout << m[i][column-1];
  }
  cout << endl;
}

// Imprime un elemento
void printelement(const Matrix& m, int row, int column){
  cout << "element " << row << " " << column << ": ";
  cout << m[row-1][column-1];
  cout << endl;
}

int main() {

  // Entro las medidas de la matriz
  int filas,columnas;
  cin >> filas >> columnas;

  Matrix m(filas,Row(columnas));

  // Introduzco los valores en la matriz
  for (int i = 0; i < filas; ++i){
    for (int j = 0; j < columnas; ++j){
      cin >> m[i][j];
    }
  }

  // Lee los "requests"
  int a,b;
  string s;
  while(cin >> s){
    if (s == "row"){
      cin >> a;
      printrow(m,a);
    } else if (s == "column"){
      cin >> a;
      printcolumn(m,a);
    } else if (s == "element"){
      cin >> a;
      cin >> b;
      printelement(m,a,b);
    }
  }


}