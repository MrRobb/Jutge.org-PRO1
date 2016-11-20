#include <iostream>
#include <cmath>

using namespace std;

// NOT FINISHED

void escriu_triangle(int t){
  int lineas = t*2;

  for (int i = 1; i <= lineas; ++i){ // Cada linea

    // Poner espacios
    for(int counter_spaces = lineas-i; counter_spaces >= 0; --counter_spaces){
      cout << ' ';
    }

    cout << "/";




    cout << endl;
  }
}

int main() {

  int x = 0;
  cin >> x;
  while (x > 0){
    escriu_triangle(x);
    cin >> x;
  }

}