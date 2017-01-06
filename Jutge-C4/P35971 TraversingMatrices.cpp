//
// Created by Roberto Ariosa Hernández on 6/1/17.
//

#include <iostream>
#include <vector>

using namespace std;

typedef vector< vector<int> > Matrix;

int sum_line(const Matrix& mat, int of, int oc, int df, int dc){
  int sum = 0;
  if(of == df){
    if(dc > oc){
      for(int i = oc+1; i <= dc; ++i) sum += mat[of][i];
    } else {
      for(int i = oc-1; i >= dc; --i) sum += mat[of][i];
    }
  } else {
    if(df > of){
      for(int i = of+1; i <= df; ++i) sum += mat[i][oc];
    } else {
      for(int i = of-1; i >= df; --i) sum += mat[i][oc];
    }
  }
  return sum;
}

int main(){
  // Fill Matrix
  int rows,columns;
  cin >> rows >> columns;
  Matrix mat(rows,vector<int> (columns));
  for(int i = 0; i < rows; ++i){
    for(int j = 0; j < columns; ++j){
      cin >> mat[i][j];
    }
  }

  // Calculate sum
  int x1,y1,x2,y2;
  cin >> x1 >> y1;
  int sum = mat[x1][y1];
  while(cin >> x2 >> y2){
    sum += sum_line(mat,x1,y1,x2,y2);
    x1 = x2;
    y1 = y2;
  }

  // Print
  cout << "suma = " << sum << endl;
}