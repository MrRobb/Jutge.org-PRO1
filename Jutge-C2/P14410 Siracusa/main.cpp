#include <iostream>

using namespace std;

void converge(int n, int& k, int& far){
  if (n > far) far = n;
  if(n%2 == 0){
    converge(n/2, ++k, far);
  }
  else if(n != 1){
    converge(3*n+1, ++k, far);
  }
}

int main() {
  int m,p;
  int max = 0;
  cin >> m >> p;
  for(int i = 1; i <= m; ++i){
    int k = 0;
    int far = 0;
    converge(i,k,far);
    if(k >= p) cout << i << endl;
    if(far > max) max = far;
  }
  cout << "The greatest reached number is " << max << '.' << endl;
}