#include <iostream>

using namespace std;

int main() {

  int a;
  int b;
  int c;
  int max;
  int middle;
  int min;

  char A;
  char B;
  char C;

  cin >> a >> b >> c;
  cin >> A >> B >> C;

  // MÁXIMO DE 3
  if (a > b) max = a;
  else max = b;
  if (c > max) max = c;

  // MÍNIMO DE 3
  if (a < b) min = a;
  else min = b;
  if (c < min) min = c;

  // MEDIO
  middle = a + b + c - max - min;

  // SUBSTITUIR A,B,C POR MAX,MIN Y MIDDLE
  a = min;
  b = middle;
  c = max;

  // SACAR ORDEN CORRECTO
  if (A == 'A'){
    if (B == 'B'){
      cout << a << ' ' << b << ' ' << c << endl;
    } else {
      cout << a << ' ' << c << ' ' << b << endl;
    }
  } else if (A == 'B'){
    if (B == 'A'){
      cout << b << ' ' << a << ' ' << c << endl;
    } else {
      cout << b << ' ' << c << ' ' << a << endl;
    }
  } else {
    if (B == 'A'){
      cout << c << ' ' << a << ' ' << b << endl;
    } else {
      cout << c << ' ' << b << ' ' << a << endl;
    }
  }

}