#include <iostream>

using namespace std;

int reduction_of_digits(int x){
  if (x < 10){

    // centinela cuando n sea menor a 10, devolver ese dígito
    return x%10;

  } else {

    // si cuando vas sumando te da un resultado mayor a 10, sumar esos dígitos también
    if ((x%10 + reduction_of_digits(x/10)) >= 10){
      return reduction_of_digits((x%10 + reduction_of_digits(x/10)));
    } else {
      return (x%10 + reduction_of_digits(x/10));
    }
  }
}

int main() {
}