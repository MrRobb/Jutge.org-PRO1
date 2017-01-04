//
// Created by Roberto Ariosa Hernández on 29/12/16.
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
  string ttrad;
  string abecedari = "abcdefghijklmnopqrstuvwxyz";
  while(cin >> ttrad){
    int n;
    cin >> n;
    vector<string> tcrip(n);
    for(int i = 0; i < n; ++i) cin >> tcrip[i];
    for(int i = 0; i < n; ++i){
      vector<bool>visitats(tcrip[i].size(),false);
      for( int j = 0; j < 26; ++j){
        for( int k = 0; k < tcrip[i].size(); ++k){
          if(tcrip[i][k] == ttrad[j] and not visitats[k]){
            tcrip[i][k] = abecedari[j];
            visitats[k] = true;
          }
          if( tcrip[i][k] == '_') tcrip[i][k] = ' ';
        }
      }
      cout << tcrip[i] << endl;
    }
    cout << endl;
  }
}