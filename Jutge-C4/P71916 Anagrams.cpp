//
// Created by Roberto Ariosa Hernández on 28/12/16.
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
  int n;
  cin >> n;
  for(int i = 0; i < n; ++i){
    vector<int> ascii(26,0);

    // Read Sequence 1
    vector<char> v1(0);
    char c;
    cin >> c;
    while(c != '.'){
      v1.push_back(c);
      if(64 < c and c < 91) ++ascii[c-65];
      cin >> c;
    }

    // Read Sequence 2
    vector<char> v2(0);
    cin >> c;
    while(c != '.'){
      v2.push_back(c);
      if(64 < c and c < 91) --ascii[c-65];
      cin >> c;
    }

    // Compare letters
    bool found = false;
    int k = 0;
    while(!found and k < 26){
      if(ascii[k++] != 0){
        found = true;
        cout << "NO" << endl;
      }
    }
    if(!found) cout << "YES" << endl;
  }
}
