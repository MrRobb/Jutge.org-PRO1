#include <iostream>

using namespace std;

int main() {

  int n;
  int potencia = 0;

  cin >> n;

  for (int i = 1; i <= n; i++){
    potencia += i*i;
  }

  cout << potencia << endl;

}