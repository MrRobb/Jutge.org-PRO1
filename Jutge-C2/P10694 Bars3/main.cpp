#include <iostream>

using namespace std;

void printbar(int n){
  if(n == 1) cout << "*" << endl;
  else {
    printbar(n-1);
    printbar(n-1);
    for(int i = 0; i < n; ++i) cout << "*";
    cout << endl;
  }
}

int main() {

  int n;
  cin >> n;
  printbar(n);

}