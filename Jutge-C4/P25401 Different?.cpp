//
// Created by Roberto Ariosa Hernández on 29/12/16.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

  int n;
  while (cin >> n){
    // Read
    vector<int> v(n);
    for(int i = 0; i < n; ++i) cin >> v[i];

    // Sort
    sort(v.begin(),v.end());

    // Count
    int count = 1;
    for(int i = 1; i < n; ++i){
      if(v[i] != v[i-1]) ++count;
    }
    cout << count << endl;
  }

}