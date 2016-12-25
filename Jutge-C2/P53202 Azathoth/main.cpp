#include <iostream>

using namespace std;

void binary_print(int n){
  if(n != 0){
    binary_print(n/2);
    cout << n%2;
  }
}

void fiftybase(int n){
  if(n != 0){
    fiftybase(n/50);
    if(n%50 == 0) cout << '0';
    else {
      binary_print(n%50);
    }
    cout << '.';
  }
}

int main() {

  int n;
  while(cin >> n){
    cout << n << " = " << '.';
    if(n == 0) cout << "0.";
    fiftybase(n);
    cout << endl;
  }


}