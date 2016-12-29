#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp (int a, int b){
  return a > b;
}

int main() {
  int n;
  while(cin >> n){
    // Read
    vector<int> v(n);
    for(int i = 0; i < n; ++i) cin >> v[i];

    // Sort
    sort(v.begin(),v.end(),comp);

    // Print
    for(int i = 0; i < n; ++i){
      if(i == 0) cout << v[i];
      else cout << ' ' << v[i];
    }

    cout << endl;

  }

}