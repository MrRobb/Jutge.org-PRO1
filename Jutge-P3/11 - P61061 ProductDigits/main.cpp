#include <iostream>

using namespace std;

int main() {

  int n;
  int s;
  int inin;


  while (cin >> n){
    inin = n;
    s = (n%10);
    n = n/10;

    while (n > 0){
      s = s * (n % 10);
      n = n / 10;
    }

    cout << "The product of the digits of " << inin << " is " << s << "." << endl;

    while (s >= 10) {

      n = s;
      inin = n;

      s = (n%10);
      n = n/10;


      while (n > 0){
        s = s * (n % 10);
        n = n / 10;
      }

      cout << "The product of the digits of " << inin << " is " << s << "." << endl;

    }

    cout << "----------" << endl;

  }

}