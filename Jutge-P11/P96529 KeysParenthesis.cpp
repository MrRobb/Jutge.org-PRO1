//
// Created by Roberto Ariosa Hernández on 5/1/17.
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
  string s;
  while(cin >> s){

    int size = s.size();
    vector<char> v(size,'0');
    int u = 0;
    bool broken = false;

    int i = 0;
    while(i < size and !broken){

      if(s[i] == '(' or s[i] == '['){
        v[u] = s[i];
        ++u;
      } else {
        --u;
        if((s[i] == ')' and s[u] != '(') or (s[i] == ']' and s[u] != '[')) broken = true;
      }

      ++i;
    }

    if(!broken and u == 0) cout << "yes" << endl;
    else cout << "no" << endl;
  }

}