#include <iostream>

using namespace std;

void info_secuencia(int n, bool& es_qc, int& p_qc){
  if (n <= 2) {
    for (int i = n; i != 0; --i) cin >> n;
    cout << p_qc << endl;
  }
  else {
    int a, b = 0, c = 0;
    int aux = n - 3;
    for (int i = 3; i != 0; --i) {
      a = b;
      b = c;
      cin >> n;
      c = n;
    }
    if (a >= b && a >= c) es_qc = false;
    if (es_qc) ++p_qc;
    while (aux != 0) {
      a = b;
      b = c;
      cin >> n;
      c = n;
      if (a >= b && a >= c) es_qc = false;
      if (es_qc) ++p_qc;
      --aux;
    }
    cout << p_qc << endl;
  }
}

int main() {
  int n,sum = 0;

  cin >> n;
  while(n != 0){
    int p_qc = 2;
    bool es_qc = true;
    info_secuencia(n,es_qc,p_qc);
    if(es_qc) ++sum;
    cin >> n;
  }

  cout << "Quasi-crecientes: " << sum << endl;

}