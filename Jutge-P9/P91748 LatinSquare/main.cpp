#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Square;

bool row(const Square &q, int f) {
  int n = q.size();
  vector<bool> v(n,false);  // Tiene que ser de bool porque si es de int ocupa más memoria que una peli 4k

  for (int i = 0; i < n; ++i) {
    if (q[f][i] != 0 and q[f][i] <= n) {            // Compruebas que el número esté dentro del rango 1,2...n
      if (!v[q[f][i] - 1]) v[q[f][i] - 1] = true;   // Compruebas que no esté repetido (la posición seriá true)
      else return false;    // Si está repetido caca
    }
    else return false;      // Si no está en el rango caca
  }
  return true;
}

// Es lo mismo que el de arriba pero recorriendo las columnas
bool column(const Square &q, int c) {
  int n = q.size();
  vector<bool> v(n,false);
  for (int i = 0; i < n; ++i) {
    if (q[i][c] != 0 and q[i][c] <= n) {
      if (!v[q[i][c] - 1]) v[q[i][c] - 1] = true;
      else return false;
    }
    else return false;
  }
  return true;
}

bool is_latin(const Square& q) {
  int n = q.size();

  for (int i = 0; i < n; ++i) {
    if (!row(q, i) or !column(q, i)) return false;
  }

  return true;
}