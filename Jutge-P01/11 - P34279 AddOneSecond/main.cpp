#include <iostream>

using namespace std;

int main() {
  int a, b, c;

  cin >> a >> b >> c;


  if (c >= 60){
    b = b + (c / 60);
    c = c % 60;
  }

  if (b >= 60){
    a = a + (b / 60);
    b = b % 60;
  }

  if (a >= 24){
    a = a % 24;
  }

  if (c == 59) {
    c = 0;
    ++b;
  } else {
    ++c;
  }

  if (b == 60){
    b = 0;
    ++a;
  }

  if (a == 24){
    a = 0;
  }

  if (a < 10) {

    if (b < 10){

      if (c < 10){
        cout << '0' << a << ':' << '0' << b << ':' << '0' << c << endl;
      } else {
        cout << '0' << a << ':' << '0' << b << ':' << c << endl;
      }
    } else {
      if (c < 10){
        cout << '0' << a << ':' << b << ':' << '0' << c << endl;
      } else {
        cout << '0' << a << ':' << b << ':' << c << endl;
      }
    }

  } else {
    if (b < 10) {
      if (c < 10) {
        cout << a << ':' << '0' << b << ':' << '0' << c << endl;
      } else {
        cout << a << ':' << '0' << b << ':' << c << endl;
      }
    } else {
      if (c < 10) {
        cout << a << ':' << b << ':' << '0' << c << endl;
      } else {
        cout << a << ':' << b << ':' << c << endl;
      }
    }

  }
}