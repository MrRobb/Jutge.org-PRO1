#include <iostream>

using namespace std;

int main() {

  long int a;
  long int b;
  long int div;
  long int inia;
  long int inib;

  cin >> a >> b;

  inia = a;
  inib = b;

  if (a == 0 or b == 0){
    div = (a + b);
  }

  while (div == 0 and (a != 0 and b != 0)) {
    if (a > b){
      if(a % b == 0) {
        div = b;
      } else {
        a = (a % b);
      }
    }

    if (b >= a){
      if(b % a == 0) {
        div = a;
      } else {
        b = (b % a);
      }
    }
  }



  cout << "The gcd of " << inia << " and " << inib << " is " <<  div << "." << endl;

}