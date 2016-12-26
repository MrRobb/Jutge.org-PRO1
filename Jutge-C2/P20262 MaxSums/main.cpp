#include <iostream>

using namespace std;

void maxsum(int& i, int& xfor, int& xback, int& maxfor, int& maxback){
  int a = 0;
  if (i != 0){
    cin >> a;
    if(xfor+a > maxfor) maxfor = xfor+a;
    xfor = xfor+a;
    maxsum(--i, xfor, xback, maxfor,maxback);
  }
  if (i == 0){
    xback += a;
    if(xback > maxback) maxback = xback;
  }
}

int main() {
  int n;
  while (cin >> n){
    int xfor = 0;
    int xback = 0;
    int maxfor = 0;
    int maxback = 0;
    maxsum(n,xfor, xback,maxfor,maxback);
    cout << maxfor << ' ' << maxback << endl;
  }
}