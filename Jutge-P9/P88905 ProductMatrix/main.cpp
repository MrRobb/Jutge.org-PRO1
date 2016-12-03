#include <iostream>
#include <vector>

using namespace std;

typedef vector< vector<int> > Matrix;

Matrix product(const Matrix& a, const Matrix& b) {
  int rowsa = int(a.size());
  int columnsa = int(a[0].size());
  int columnsb = int(b[0].size());

  Matrix m(rowsa, vector<int>(columnsb, 0));

  for(int i = 0; i < rowsa; ++i){
    for(int j = 0; j < columnsb; ++j){
      for(int k = 0; k < columnsa; ++k){
        m[i][j] += a[i][k] * b[k][j];
      }
    }
  }

  return m;
}


int main() {
}