#include <iostream>

using namespace std;

int mcd2 (int a, int b){

  int div = 0;

  if (a == 0 or b == 0){
    div = (a + b);
  }

  while (div == 0 and (a != 0 and b != 0)) {
    if (a > b){
      if(a % b == 0) {
        div = b;
      } else {
        a = (a % b);
      }
    }

    if (b >= a){
      if(b % a == 0) {
        div = a;
      } else {
        b = (b % a);
      }
    }
  }

  return div;
}

int gcd4(int a, int b, int c, int d){
  int gcda = mcd2(a,b);
  int gcdb = mcd2(c,d);
  int gcdab = mcd2(gcda,gcdb);

  return gcdab;
}

int main() {

  int a;
  int b;
  int c;
  int d;

  while (cin >> a >> b >> c >> d){
    int gcd = gcd4(a,b,c,d);
    cout << gcd << endl;
  }

}