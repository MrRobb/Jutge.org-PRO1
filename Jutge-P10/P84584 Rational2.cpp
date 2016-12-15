#include <iostream>

using namespace std;

struct Rational {
  int num, den;
};

int mcd(int a, int b){
  if(a < b){
    int aux = a;
    a = b;
    b = aux;
  }

  if (a < 0) a *= -1;
  if (b < 0) b *= -1;

  int r = a%b;
  while(r > 0){
    a = b;
    b = r;
    r = a%b;
  }

  return b;
}

Rational simplify(int n, int d){
  Rational r;
  if (n == 0) d = 1;
  else{
    int x = mcd(n, d);
    n = n/x;
    d = d/x;
    if (d < 0){
      d *= -1;
      n *= -1;
    }
  }
  r.num = n;
  r.den = d;
  return r;
}

void read_rational(Rational& r, bool& end){
  if (cin >> r.num){
    if (cin >> r.den){
      r = simplify(r.num,r.den);
      end = false;
    } else end = true;
  } else end = true;
}

void print_rational(const Rational& r){
  cout << r.num;
  if(r.den != 1) cout << "/" << r.den;
}

int main(){

}