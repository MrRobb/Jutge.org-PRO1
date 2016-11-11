#include <iostream>

using namespace std;

int main() {

  char c;
  while (cin >> c){
    int num = 0;
    int unknown = 0;

    for (int i = 0; i < 10; i++){
      if (47 < int(c) and int(c) < 58){
        num += ((int(c)-'0') * (10-i));
      } else if (c == 'X') {
        num += 10;
      } else {
        unknown = 10-i;
      }
      if (i != 9) cin >> c;
    }

    for (int i = 1; i <= 10; i++){
      if ((i*unknown + num) % 11 == 0){
        if (i != 10) cout << i << endl;
        else cout << 'X' << endl;
      }
    }
  }


}