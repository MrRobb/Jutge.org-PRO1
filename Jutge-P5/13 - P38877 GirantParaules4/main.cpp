#include <iostream>

using namespace std;

int girar(int n, string s, int stop){
  string s2;
  if (cin >> s2){
    n = girar(n,s2,stop);
  }
  if (n <= stop){
    cout << s << endl;
  }
  return ++n;
}

int main() {
  int n = 1;
  string s;
  int stop = 0;
  cin >> stop;
  girar(n,s,stop);
}