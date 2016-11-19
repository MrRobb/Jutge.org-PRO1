#include <iostream>

using namespace std;

int printline(int n){
  string s;
  if(cin >> s){
    int nfinal;
    nfinal = printline(n+1);
    if(n <= nfinal/2)cout << s << endl;
    return nfinal;
  } else {
    return n-1;
  }
}

int main() {

  printline(1);

}