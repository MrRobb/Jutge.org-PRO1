#include <iostream>

using namespace std;

void basef (int n, int base){
  string s = "0123456789ABCDEF";
  int q;
  q = n/base;
  if (q!=0) basef(q,base);
  cout << s[n%base];
}

int main() {

  int n;
  while(cin >> n){
    cout << n << " = ";
    basef(n,2);
    cout << ", ";
    basef(n,8);
    cout << ", ";
    basef(n,16);
    cout << endl;
  }

}