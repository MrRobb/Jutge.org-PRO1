#include <iostream>

using namespace std;

int main() {
  char a;
  char b;
  cin >> a;

  if (tolower(a) == a){
    b = (char) toupper(a);
    cout << b << endl;
  } else {
    b = (char) tolower(a);
    cout << b << endl;
  }
}