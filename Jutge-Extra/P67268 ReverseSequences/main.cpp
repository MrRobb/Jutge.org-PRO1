#include <iostream>
#include <vector>

using namespace std;

int main() {

  int n;
  while(cin >> n){
    vector<int> v(n);
    for (int i = 0; i < n; ++i){
      cin >> v[i];
    }
    for (int j = 0; j < n; j++){
      if (j == n-1) cout << v[n-1-j];
      else cout << v[n-1-j] << ' ';
    }
    cout << endl;
  }



}