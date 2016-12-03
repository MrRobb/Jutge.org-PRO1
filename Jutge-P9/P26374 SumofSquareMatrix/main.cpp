#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriu;

Matriu suma(const Matriu& a, Matriu& b) {
  int size = a.size();
  Matriu Suma(size, Fila(size));
  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < size; ++j) {
      Suma[i][j] =    a[i][j] + b[i][j];
    }
  }
  return Suma;
}

int main (){

}