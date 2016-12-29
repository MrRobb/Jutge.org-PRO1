//
// Created by Roberto Ariosa Hernández on 29/12/16.
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
  char c;
  while (cin >> c){
    vector<int> alphabet(26,0);

    // Add +1 if a letter appears
    while(c != '.'){
      if(96 < c and c < 123) c -= 32;    // To mayus
      if(64 < c and c < 91){
        ++alphabet[c-65];
      }
      cin >> c;
    }

    // See if there's a letter that has not appeared
    bool found = false;
    int i = 0;
    while(i < 26 and !found){
      if(alphabet[i] <= 0) found = true;
      ++i;
    }

    if(found) cout << "NO" << endl;
    else cout << "YES" << endl;
  }

}