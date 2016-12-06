#include <iostream>

using namespace std;

void girar(int i, int n, int& m){
  string st;
  if (cin >> st){
    i = i + 1;
    girar(i,n,m);
    if (m-i+1 <= n) cout << st << endl;
  } else {
    m = i;
  }
}

int main() {
  int m = 0;
  int n;
  int i = 0;

  cin >> n;

  girar(i,n,m);
}