#include <iostream>

using namespace std;

int main() {

  int a;
  int b;
  int c;
  int x = 1;


  while (cin >> a >> b) {

    if (x != 1){
      cout << endl;
    }

    c = 9;

    for (int i = 0; i < a; i++){

      for (int j = 0; j < b; j++){
        cout << c;

        if (c == 0){
          c = 9;
        } else {
          --c;
        }
      }

      cout << endl;

    }

    x++;

  }

}