#include <iostream>
#include <vector>

// Not finished (yet)

using namespace std;

typedef vector< vector<char> > Matrix;

// Search
Matrix searchHorizontal(Matrix m, vector<string> words){

}
Matrix searchVertical(Matrix m, vector<string> words){
  return m;
}
Matrix searchDiagonal(Matrix m, vector<string> words){
  return m;
}

// Read
vector<string> readVector(int size){
  vector<string> v(size);
  for (int i = 0; i < size; ++i){
    cin >> v[i];
  }
  return v;
}
Matrix readMatrix(int sizeRow, int sizeColumns){
  Matrix m(sizeRow, vector<char> (sizeColumns));
  for(int i = 0; i < sizeRow; ++i){
    for(int j = 0; j < sizeColumns; ++j){
      cin >> m[i][j];
    }
  }
  return m;
}

// Print
void printMatrix(Matrix m){
  for (int i = 0; i < m.size(); ++i){
    for(int j = 0; j < m[0].size(); ++j){
      cout << m[i][j] << ' ';
    }
    cout << endl;
  }
}



int main() {

  int sizeWords, sizeRow, sizeColumns;
  while(cin >> sizeWords >> sizeRow >> sizeColumns){
    // Read
    vector<string> words(sizeWords);
    words = readVector(sizeWords);
    Matrix m(sizeRow, vector<char> (sizeColumns));
    m = readMatrix(sizeRow,sizeColumns);

    // Search
    m = searchHorizontal(m,words);

    // Print
    printMatrix(m);

  }
}