#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, x;
    cin >> n;

    int aux = n;
    vector<int> v(n);
    int contador = 0;

    int i = 0;
    while (n != 0) {
      cin >> x; --n;
      v[i] = x; ++i;
    }


    for (int j = 0; j < aux-1; ++j) {
      if (v[j] == v[aux-1]) ++contador;
    }

    cout << contador << endl;
}