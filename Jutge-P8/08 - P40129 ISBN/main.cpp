#include <iostream>

using namespace std;

int main() {

  string s;
  while (cin >> s){
    int num = 0;
    int unknown = 0;

    for (int i = 0; i < s.size(); i++){
      if (s[i] >= 48 and s[i] <= 57){
        num += (s[i]-'0') * (10-i);
      } else if (s[i] == 'X'){
        num += 10;
      } else {
        unknown = 10-i;
      }
    }

    bool encontrado = false;
    int j = 0;
    while (!encontrado){
      if ((num+(unknown*j)) % 11 == 0) encontrado = true;
      j++;
    }

    if (--j == 10) cout << 'X' << endl;
    else cout << j << endl;

  }
}