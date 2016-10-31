#include <iostream>
#include <cmath>


using namespace std;

int contarDigitos(int n){
  int digits = 1;

  while (n >= 10){
    n = n / 10;
    digits++;
  }

  return digits;

}

int extraerMitad1(int n, int digits){
  n = n / ((int)pow(10, (digits / 2)));
  int sum = 0;
  for(int i = 0; i < (digits / 2); i++){
    sum = (sum) + (n % 10);
    n = n / 10;
  }
  return sum;
}

int extraerMitad2(int n, int digits){
  int sum = 0;
  for(int i = 0; i < (digits / 2); i++){
    sum = (sum) + (n % 10);
    n = n / 10;
  }
  return sum;
}

int main() {

  int number;
  cin >> number;

  int digitos = contarDigitos(number);
  int mitad1 = 0;
  int mitad2 = 0;

  if (digitos % 2 != 0){

    cout << "nada" << endl;

  } else {

    mitad1 = extraerMitad1(number, digitos);
    mitad2 = extraerMitad2(number, digitos);

    if (mitad1 > mitad2){
      cout << mitad1 << " > " << mitad2 << endl;
    } else if (mitad1 < mitad2) {
      cout << mitad1 << " < " << mitad2 << endl;
    } else {
      cout << mitad1 << " = " << mitad2 << endl;
    }
  }




}