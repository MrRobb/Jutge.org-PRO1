#include <iostream>

using namespace std;

void decompose(int n, int& h, int& m, int& s){
  h = 0;
  m = 0;
  s = 0;

  if (n >= 3600){
    h = n / 3600;
    n = n % 3600;
  }
  if (n >= 60){
    m = n / 60;
    n = n % 60;
  }
  s = n;
}

int main() {
}