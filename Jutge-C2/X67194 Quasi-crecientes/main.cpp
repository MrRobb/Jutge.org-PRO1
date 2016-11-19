#include <iostream>

using namespace std;

// NOT FINISHED

void info_secuencia(int n, bool& es_qc, int& p_qc){
  int a,b;
  int i = 0;

  while (es_qc and i < n-1){
    if (i == 0) {
      cin >> a;
      cin >> b;
      p_qc = 2;
    }

    if (a < b) {
      ++p_qc;
    } else {
      cin >> b;
      if (a < b){
        ++p_qc;
      } else {
        es_qc = false;
      }
    }
    ++i;
  }

}

int main() {

  int n;
  cin >> n;

  while(n != 0){

    bool qc = true;
    int position = 0;

    info_secuencia(n,qc,position);

    cout << n << endl;
    cout << qc << endl;
    cout << position << endl;
    cin >> n;
  }

}