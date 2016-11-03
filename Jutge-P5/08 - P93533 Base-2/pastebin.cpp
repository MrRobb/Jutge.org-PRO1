#include <iostream>
using namespace std;
 
int residuo(int n) {
  int r = n%2;
  if(r < 0) return r+2;
  else return r;
}
 
void base_menos2(int n){
  int r = residuo(n);
  int q = (n-r)/-2;
  if (q != 0) base_menos2(q);
  cout << r;
}
 
int main(){
 int n;
 while(cin >> n){
    cout << n << ": ";
    base_menos2(n);
    cout << endl;
  }
}