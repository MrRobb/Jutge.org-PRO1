#include <iostream>
#include <vector>

using namespace std;

int main() {

  unsigned long n;
  while (cin >> n){
    vector<int> v(n);
    int odds = 0;
    int pairs = 0;

    for (int i = 0; i < n; i++){
      cin >> v[i];
      if(v[i]%2 == 0) pairs++;
      else odds++;
    }

    if(pairs >=1 and odds >= 1) cout << "yes" << endl;
    else cout << "no" << endl;
  }

}