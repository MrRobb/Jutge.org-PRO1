#include <iostream>
#include <vector>

using namespace std;

int main() {

  unsigned long n;
  int sum;

  while (cin >> n){
    sum = 0;
    bool found = false;
    vector<int> v(n);

    for (int i = 0; i < n; i++){
      cin >> v[i];
      sum += v[i];
    }

    int j = 0;
    while (j < n and !found){
      if (sum-v[j] == v[j]) {
        cout << "YES" << endl;
        found = true;
      }
      j++;
    }
    if (!found) cout << "NO" << endl;
  }

}