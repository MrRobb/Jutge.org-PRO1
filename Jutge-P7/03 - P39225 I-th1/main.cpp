#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  int valor;
  int i = 0;
  vector<int> v;
  cin >> n;
  cin >> valor;

  while (valor != -1){
    v.push_back(valor);
    cin >> valor;
    ++i;
  }

  cout << "At the position " << n << " there is a(n) " << v[n-1] << "." << endl;

}