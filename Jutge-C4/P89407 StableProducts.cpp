//
// Created by Roberto Ariosa Hernández on 4/1/17.
//

#include <iostream>
#include <vector>

using namespace std;

string base (int a, int base){
  string hexa = "0123456789ABCDEF";
  string s = "";
  while(a > 0){
    s = hexa[a%base] + s;
    a /= base;
  }
  return s;
}

bool checkdigits(string a, string b, string prod){
  vector<int> v(23,0);
  for(int i = 0; i < a.size(); ++i) ++v[int(a[i])-48];
  for(int i = 0; i < b.size(); ++i) ++v[int(b[i])-48];
  for(int i = 0; i < prod.size(); ++i) --v[int(prod[i])-48];

  for(int i = 0; i < 23; ++i) if(v[i] != 0) return false;
  return true;
}

int main(){
  int a,b;
  while(cin >> a >> b){
    cout << "solutions for " << a << " and " << b << endl;

    bool some = false;

    for(int i = 2; i <= 16; ++i){

      string basea = base(a,i);
      string baseb = base(b,i);
      string baseprod = base(a*b,i);

      if(checkdigits(basea,baseb,baseprod)){
        cout << basea << " * " << baseb << " = " << baseprod << " (base " << i << ")" << endl;
        some = true;
      }
    }

    if(!some) cout << "none of them" << endl;

    cout << endl;
  }
}