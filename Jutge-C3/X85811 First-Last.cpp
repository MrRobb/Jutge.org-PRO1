#include <iostream>
#include <vector>

using namespace std;

int main(){
  int n;
  while(cin >> n){
    // Llenar vector
    vector<int> v(n);
    for(int i = 0; i < n; ++i) cin >> v[i];

    // Print
    bool last = false;
    bool first = true;
    for(int i = 0; i < n; ++i){
      if(!last) {
        if(first) {
          cout << v[i/2];
          first = !first;
        } else cout << ' ' << v[i/2];
        last = !last;
      }
      else {
        cout << ' ' << v[n-(i/2)-1];
        last = !last;
      }
    }
    cout << endl;
  }
}