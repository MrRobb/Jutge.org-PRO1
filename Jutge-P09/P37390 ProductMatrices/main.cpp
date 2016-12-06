#include <iostream>
#include <vector>

using namespace std;

typedef vector< vector<int> > Matrix;

Matrix product(const Matrix& a, const Matrix& b){
  int size = a.size();
  Matrix w(size, vector<int> (size,0));

  for (int i = 0; i < size; ++i){
    for(int j = 0; j < size; ++j){
      for (int k = 0; k < size; ++k){
        w[i][j] += a[i][k] * b[k][j];
      }
    }
  }
  return w;
}

int main() {


}