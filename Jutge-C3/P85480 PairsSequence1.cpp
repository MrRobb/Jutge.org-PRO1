#include <iostream>
#include <vector>

using namespace std;

bool is_prime(int n) {
  if (n <= 1) return false;
  for (int i = 2; i*i <= n; i++) {
    if (n%i == 0) return false;
  }
  return true;
}

int main() {

  unsigned long n;
  while (cin >> n){
    vector<int> v(n);
    bool found = false;

    for (int i = 0; i < n; i++){
      cin >> v[i];
    }

    int j = 0;
    while(j < v.size() and !found){
      int k = j;
      while(k < v.size() and !found){
        if(is_prime(v[j]+v[k]) and k != j) found = true;
        k++;
      }
      j++;
    }

    if(found) cout << "yes" << endl;
    else cout << "no" << endl;
  }

}