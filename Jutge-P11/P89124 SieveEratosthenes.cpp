#include <iostream>
#include <vector>

using namespace std;

int main(){

  int n;
  while (cin >> n){
    vector<bool> v(n+1,true);
    v[0] = false;
    v[1] = false;

    for(int i = 2; i*i <= n; ++i){
      if(v[i] == true){
        for(int j = 0; i*i+j*i <= n; ++j){
          v[i*i+j*i] = false;
        }
      }
    }

    if (v[n] == true) cout << n << " is prime" << endl;
    else cout << n << " is not prime" << endl;
  }
}