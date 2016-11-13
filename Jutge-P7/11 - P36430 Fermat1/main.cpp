#include <iostream>
#include <cmath>

using namespace std;

int main() {

  int a,b,c,d;
  int num = -1;

  cin >> a >> b >> c >> d;

  int i = a;
  int j;

  while (i <= b and num == -1){
    j = c;
    while (j <= d and num == -1){
      if (sqrt(i*i + j*j) == int(sqrt(i*i + j*j))){
        num = int(sqrt(i*i + j*j));
      }
      j++;
    }
    i++;
  }

  if (num < 0) cout << "No solution!" << endl;
  else cout << --i << "^2 + " << --j << "^2 = " << num << "^2" << endl;

}