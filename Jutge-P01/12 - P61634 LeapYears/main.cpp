#include <iostream>

using namespace std;

int main() {
  int year;
  cin >> year;

  if (year % 100 == 0 && year != 0){
    if ((year / 100) % 4 == 0){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  } else if (year % 4 == 0){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}