#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<int>> Matrix;

Matrix sum(const Matrix& a, const Matrix& b){
  // Creo una matriz del mismo tamaño que a o b (en este caso a)
  Matrix m(a.size(),vector<int>(a[0].size()));

  int filas = m.size();
  int columnas = m[0].size();

  for (int i = 0; i < filas; ++i){
    for (int j = 0; j < columnas; ++j){
      m[i][j] = a[i][j] + b[i][j];
    }
  }

  return m;

}

int main() {
}