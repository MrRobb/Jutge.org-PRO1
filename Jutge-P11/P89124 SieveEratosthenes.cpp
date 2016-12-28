#include <iostream>
#include <vector>

using namespace std;

int main(){

  vector<bool> v(1000001,true);
  v[0] = false;
  v[1] = false;

  for(int i = 2; i*i <= 1000001; ++i){
    if(v[i] == true){
      for(int j = 0; i*i+j*i <= 1000000; ++j){
        v[i*i+j*i] = false;
      }
    }
  }

  int n;
  while (cin >> n){
    if (v[n] == true) cout << n << " is prime" << endl;
    else cout << n << " is not prime" << endl;
  }
}