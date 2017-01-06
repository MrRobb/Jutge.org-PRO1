//
// Created by Roberto Ariosa Hernández on 6/1/17.
//

#include <iostream>

using namespace std;

string sum(string x, string y){
  string z (x.length()+1,'0');

  int i = x.length()-1;
  int dif = x.length()-y.length();
  while(0 <= i and i >= dif){
    if((z[i+1]-48 + x[i]-48 + y[i-dif]-48)/10 != 0) z[i] += 1;
    z[i+1] = char((z[i+1]-48 + (x[i]-48 + y[i-dif]-48)%10)%10 + 48);
    --i;
  }

  while(0 <= i){
    if(i >= 0 and (z[i+1]-48 + x[i]-48)/10 != 0) z[i] += 1;
    z[i+1] = char((z[i+1]-48 + x[i]-48)%10 + 48);
    --i;
  }

  return z;
}

int main(){
  string x, y;
  while (cin >> x >> y) cout << sum(x, y) << endl;
}