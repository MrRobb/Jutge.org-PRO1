#include <iostream>

using namespace std;

bool strobogrammatic(string s){
  int size = s.size()-1;
  for (int i = 0; i < s.size(); i++){
    if (s[i] == '6' and s[size-i] != '9') return false;
    else if (s[i] == '9' and s[size-i] != '6') return false;
    else if (s[i] == '8' and s[size-i] != '8') return false;
    else if (s[i] == '1' and s[size-i] != '1') return false;
    else if (s[i] == '0' and s[size-i] != '0') return false;
    else if (s[i] == '2' or s[i] == '4' or s[i] == '3' or s[i] == '5' or s[i] == '7') return false;
  }
  return true;
}

int main() {

  string n;
  int odd = 0;

  while (cin >> n){

    if (strobogrammatic(n)){
      cout << n << " is strobogrammatic" << endl;
      if (int(n[n.size()-1])%2 != 0) ++odd;
    }
    else cout << n << " is not strobogrammatic" << endl;

  }

  cout << endl;
  cout << "odd strobogrammatic: " << odd << endl;

}