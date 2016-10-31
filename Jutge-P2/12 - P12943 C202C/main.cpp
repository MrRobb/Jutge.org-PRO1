#include <iostream>

using namespace std;

int main() {

  int preguntes;

  char r;
  int a = 0;
  int b = 0;
  int c = 0;

  cin >> preguntes;

  for (int i = 0; i < preguntes; i++){

    cin >> r;

    if (r == 'a'){
      a++;
    } else if (r == 'b'){
      b++;
    } else {
      c++;
    }
  }

  if (a >= b){
    if (a >= c){
      cout << "majoria de a" << endl << a << " repeticio(ns)" << endl;
    } else {
      cout << "majoria de c" << endl << c << " repeticio(ns)" << endl;
    }
  } else if (b > a) {
    if (b >= c){
      cout << "majoria de b" << endl << b << " repeticio(ns)" << endl;
    } else {
      cout << "majoria de c" << endl << c << " repeticio(ns)" << endl;
    }
  }
}