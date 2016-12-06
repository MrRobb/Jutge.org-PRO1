#include <iostream>

using namespace std;

// Not tried

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

Rational rational(int n, int d){
  int maxcd = 1;
  if(n != 0) maxcd = mcd(n,d);

  n = n / maxcd;
  d = d / maxcd;

  if (n == 0) d = 1;
  if (d < 0){
    d *= -1;
    n *= -1;
  }

  Rational result;
  result.num = n;
  result.den = d;

  return result;
}

Rational sum(const Rational& a, const Rational& b){
  int mcm = a.den*b.den/mcd(a.den,b.den);

  Rational result;
  result.num = (mcm/a.den*a.num) + (mcm/a.den*a.num);
  result.den = mcm;

  return rational(result.num,result.den);
}

Rational substraction(const Rational& a, const Rational& b){
  int mcm = a.den*b.den/mcd(a.den,b.den);

  Rational result;
  result.num = (mcm/a.den*a.num) - (mcm/a.den*a.num);
  result.den = mcm;

  return rational(result.num,result.den);
}

Rational product(const Rational& a, const Rational& b){
  Rational result;
  result.num = a.num * b.num;
  result.den = a.den * b.den;

  return rational(result.num,result.den);
}

Rational division(const Rational& a, const Rational& b){
  Rational result;
  result.num = a.num * b.den;
  result.den = a.den * b.num;

  return rational(result.num,result.den);
}