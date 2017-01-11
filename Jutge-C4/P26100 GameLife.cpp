//
// Created by Roberto Ariosa Hernández on 9/1/17.
//

#include <iostream>
#include <vector>

using namespace std;

typedef vector< vector<char> > Matrix;

bool validposition(Matrix& m, int row, int column){
  return row >= 0 and row < m.size() and column >= 0 and column < m[0].size();
}

int main(){
  // Create matrix
  bool first = true;
  int rows,columns;
  int table[8][2] = {{-1,-1},{-1,0},{-1,1},
                     {0,-1},         {0,1},
                     {1,-1},  {1,0},{1,1}};

  cin >> rows >> columns;
  while(rows != 0 and columns != 0) {
    if(first == true) first = false;
    else cout << endl;

    Matrix m(rows, vector<char>(columns));
    Matrix new_m(rows, vector<char>(columns));

    // Fill matrix
    for (int i = 0; i < rows; ++i) {
      for (int j = 0; j < columns; ++j) {
        cin >> m[i][j];
      }
    }

    for (int x = 0; x < rows; ++x) {
      for (int y = 0; y < columns; ++y) {
        int bichos = 0;
        for (int w = 0; w < 8; ++w) {
          int new_x = x + table[w][0];
          int new_y = y + table[w][1];

          // If the position is valid, calculate how many shits are around.
          if (validposition(m, new_x, new_y) and m[new_x][new_y] == 'B') {
            ++bichos;
          }
        }

        if (m[x][y] == '.') {
          if (bichos == 3) new_m[x][y] = 'B';
          else new_m[x][y] = '.';
        } else {
          if (bichos == 3 or bichos == 2) new_m[x][y] = 'B';
          else new_m[x][y] = '.';
        }
      }
    }

    for (int i = 0; i < rows; ++i) {
      for (int j = 0; j < columns; ++j) {
        cout << new_m[i][j];
      }
      cout << endl;
    }

    cin >> rows >> columns;
  }
}