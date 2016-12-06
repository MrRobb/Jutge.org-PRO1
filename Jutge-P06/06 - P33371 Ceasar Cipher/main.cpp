#include <iostream>

using namespace std;

char encoded(char c, int k){
  return (char)(((c-'a'+k) % 26)+'A');
}

int main() {

  int n;
  char c = 'a';

  cin >> n;

  while (cin >> c){
    if (c == '_'){
      cout << ' ';
    } else if (c == '.'){
      cout << endl;
      cin >> n;
    } else if ((64 < (int)c and (int)c < 91) or (96 < (int)c and (int)c < 123)) {
      if(!(64 < (int)c and (int)c < 91)){
        c = encoded(c,n);
      } else if (!(96 < (int)c and (int)c < 123)){
        c = encoded(c,n);
      }
      cout << c;
    } else {
      cout << c;
    }
  }
}