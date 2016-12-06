#include <iostream>
#include <vector>

using namespace std;

int main() {

  unsigned long n;

  while (cin >> n){
    int sum = 0;
    string encontrado = "NO";

    vector<int> v(n);

    for (int i = 0; i < n; i++){
      cin >> v[i];
      sum += v[i];
    }

    for (int j = 0; j < v.size(); j++){
      if (v[j] == sum-v[j]) encontrado = "YES";
    }

    cout << encontrado << endl;
  }
}