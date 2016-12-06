#include <iostream>
#include <stdlib.h> 
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;

Matrix randomMatrix(int filas, int columnas){
	Matrix m(filas, vector<int>(columnas));
	for (int i = 0; i < filas; ++i){
		for(int j = 0; j < columnas; ++j){
			m[i][j] = rand() % 10;
		}
	}
	return m;
}

void readMatrix(Matrix m){
	for (int i = 0; i < m.size(); ++i){
		for(int j = 0; j < m[0].size(); ++j){
			cin >> m[i][j];
		}
	}
}

void printMatrix(Matrix m){
	for (int i = 0; i < m.size(); ++i){
		for(int j = 0; j < m[0].size(); ++j){
			cout << m[i][j] << ' ';
		}
		cout << endl;
	}
}

int main(){
	Matrix m = randomMatrix(6,6);
	printMatrix(m);
	cout << endl;
}
