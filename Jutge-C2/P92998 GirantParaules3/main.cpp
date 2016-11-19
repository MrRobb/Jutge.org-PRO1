#include <iostream>

using namespace std;

void printline(int n){
  string s;
  cin >> s;
  if (n == 1) cout << s << endl;
  else {
    printline(n-1);
    cout << s << endl;
  }
}

int main() {

  int n;
  cin >> n;
  if(n) printline(n);

}