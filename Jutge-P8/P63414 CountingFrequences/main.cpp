#include <iostream>
#include <vector>

using namespace std;

int main(){

  unsigned long n;
  cin >> n;
  vector<int> v(1001);
  int a;

  for (int num = 0; num < n; num++){
    cin >> a;
    v[a%10000]++;
  }


  for (int i = 0; i < 1001; i++){
    if(v[i] != 0) cout << 1000000000+i << " : " << v[i] << endl;
  }
}