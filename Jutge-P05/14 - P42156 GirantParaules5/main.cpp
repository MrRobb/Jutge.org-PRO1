#include <iostream>

using namespace std;

void girar(int i, int& m){
  string st;
  if (cin >> st){
    i++;
    girar(i,m);
    if (m%2 == 0 and (m-i+1) <= m/2) cout << st << endl;
    else if (m%2 != 0 and (m-i+1) <= m/2+1) cout << st << endl;
  } else {
    m = i;
  }
}

int main() {
  int m = 0;
  int i = 0;

  girar(i,m);
}