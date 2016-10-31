#include <iostream>

using namespace std;

long int mcd (long int a, long int b){
  if (b > a){
    long int aux;
    aux = a;
    a = b;
    b = aux;
  }

  long int r;
  while (b != 0){
    r = a % b;
    a = b;
    b = r;
  }

  return a;
}

long int mcm (long int a, long int b){
  return (a*b / mcd(a,b));
}

int main() {

  long int a;
  long int mincomdiv;
  long int n;

  cin >> n;
  while (n != 0){

    for (int i = 0; i < n; i++){
      cin >> a;
      if (i == 0){
        mincomdiv = a;
      }
      mincomdiv = mcm(mincomdiv,a);
    }

    cout << mincomdiv << endl;
    cin >> n;
  }
}