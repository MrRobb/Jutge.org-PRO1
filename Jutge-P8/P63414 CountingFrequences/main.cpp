#include <iostream>
#include <vector>

using namespace std;

// Time limit exceeded --> se tiene que usar ordenación rápida

void ordena_per_insercio(vector<int>& v1, vector<int>& v2) {
  // Inv: v[0..i-1] esta ordenat creixentment
  for (int i = 1; i < v1.size(); ++i) {
    int x = v1[i];
    int y = v2[i];

    int j = i;
    while (j > 0 and v1[j - 1] > x) {
      v1[j] = v1[j - 1];
      v2[j] = v2[j - 1];
      --j;
    }
    v1[j] = x;
    v2[j] = y;
  }
}

int main() {

  unsigned long n;
  int found;
  cin >> n;
  vector<int> v(n);
  vector<int> count(n,0);

  for (int i = 0; i < n; i++){
    cin >> v[i];
    found = 0;
    for (int j = 0; j <= i; j++){
      if (v[i] == v[j] and !found) {
        ++count[j];
        found = 1;
      }
    }
  }

  ordena_per_insercio(v,count);

  for (int x = 0; x < n; x++){
    if (count[x] != 0) cout << v[x] << " : " << count[x] << endl;
  }

}