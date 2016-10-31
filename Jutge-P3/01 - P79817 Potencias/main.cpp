#include <iostream>

using namespace std;

int main() {

  int a;
  int b;


  while (cin >> a >> b){

    int r = 1;

    if (b == 0) { r = 1; }
    for (int i = 0; i < b; i++) {
      r *= a;
    }

    cout << r << endl;

  }

}

