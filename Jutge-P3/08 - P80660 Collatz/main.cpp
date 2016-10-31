#include <iostream>

using namespace std;

int main() {

  int n;
  int steps = 0;

  while(cin >> n){

    steps = 0;

    while (n != 1) {
      if (n % 2 == 0){
        n = n / 2;
      } else {
        n = (3 * n) + 1;
      }
      steps++;
    }

    cout << steps << endl;

  }

}