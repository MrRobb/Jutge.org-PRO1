//
// Created by Roberto Ariosa Hernández on 28/12/16.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

  // Create the vectors
  int n;
  while(cin >> n){
    int i = 0;
    int j = 0;
    vector<int> even(1000);
    vector<int> odd(1000);

    // Fill them
    while(n != 0){
      if(n%2 == 0) even[i++] = n;
      else odd[j++] = n;
      cin >> n;
    }

    // Sort them
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());

    // Print them
    for(int a = i; a >= 1; --a){
      if(a == i) cout << even[even.size()-a];
      else cout << ' ' << even[even.size()-a];
    }
    cout << endl;
    for(int a = 1; a <= j; ++a){
      if(a == 1) cout << odd[odd.size()-a];
      else cout << ' ' << odd[odd.size()-a];
    }
    cout << endl;
  }
}