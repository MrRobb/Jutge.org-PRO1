#include <iostream>
#include <vector>

using namespace std;
typedef vector< vector<int> > Matrix;

void readMatrix(Matrix& m){
  int rows = int(m.size());
  int columns = int(m[0].size());
  for (int i = 0; i < rows; ++i){
    for (int j = 0; j < columns; ++j){
      cin >> m[i][j];
    }
  }
}

int main() {
  int a,b;

  while(cin >> a >> b){
    // Read Matrix
    Matrix m(a,vector<int>(b));
    readMatrix(m);

    // Search
    int rows = int(m.size());
    int columns = int(m[0].size());
    bool below = true;
    bool right = true;
    int areas = 0;

    for (int i = 0; i < rows; ++i){
      for (int j = 0; j < columns; ++j){
        if (m[i][j] != 0){
          below = (i+1 < rows and m[i+1][j] != 0);        // if there's another number on the below
          right = (j+1 < columns and m[i][j+1] != 0);     // if there's another number on the right
          if (!below and !right) ++areas;                 // Only +1 if is the last number of the area
        }
      }
    }

    cout << areas << endl;

  }
}