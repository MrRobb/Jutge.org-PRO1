//
// Created by Roberto Ariosa Hernández on 9/1/17.
//

#include <iostream>

using namespace std;

void printnum(int n, int digits, vector<string> unitats,vector<string> desenes, vector<string> altres){
  if(digits <= 2){
    if(n < 20 and n != 0) cout << v[n];
    else {
      cout << desenes[n/10];
      if(n%10 != 0) cout << unitats[n%10];
    }
  } else if (digits == 3) {
    if(n/100 == 1){
      cout << altres[0];
      printnum(n%100);
    }
  }
}

int main(){
  int n;
  cin >> n;
  vector<string> v(20);
  v[0] = "zero";
  v[1] = "un";
  v[2] = "dos";
  v[3] = "tres";
  v[4] = "quatre";
  v[5] = "cinc";
  v[6] = "sis";
  v[7] = "set";
  v[8] = "vuit";
  v[9] = "nou";
  v[10] = "deu";
  v[11] = "deu";
  v[12] = "deu";
  v[13] = "deu";
  v[14] = "deu";
  v[15] = "deu";
  v[16] = "deu";
  v[17] = "deu";
  v[18] = "deu";
  v[19] = "deu";

  vector<string> desenes(10);
  desenes[2] = "vint";
  desenes[3] = "trenta";
  desenes[4] = "quaranta";
  desenes[5] = "cinquanta";
  desenes[6] = "seixanta";
  desenes[7] = "setanta";
  desenes[8] = "vuitanta";
  desenes[9] = "nouranta";

  vector<string> altres(10);
  altres[0] = "cent";
  altres[0] = "cents";
  altres[0] = "mil";
  altres[0] = "milio";
  altres[0] = "milions";

  if(n == 0) cout << "zero.";
  else printnum(n);
}