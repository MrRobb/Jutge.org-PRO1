#include <iostream>
#include <vector>

using namespace std;

typedef vector<string> Row;
typedef vector<Row> Matrix;

int number_of_words(const Matrix& m, char c, int k){
  int n = 0;
  int rows = m.size();
  int columnas;
  for (int i = 0; i < rows; ++i){
    columnas = m[i].size();
    for (int j = 0; j < columnas; ++j){
      int l = m[i][j].length();
      if (k < l and m[i][j][k] == c) ++n;
    }
  }
  return n;
}

int main(){
}