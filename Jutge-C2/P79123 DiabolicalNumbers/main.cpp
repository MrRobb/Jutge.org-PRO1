#include <iostream>

using namespace std;

int numberofdigitslesssix(int num){
  int sum = 0;
  if(num == 0) sum = 1;
  while(num > 0){
    num /= 10;
    ++sum;
  }
  return 6-sum;
}

bool is_diabolical(int n){
  int ini = n;
  int sum = 0;
  while(n > 0){
    sum += n%4;
    n /= 4;
  }
  return ini % (2 * sum) == 0;
}

int main() {
  int n;
  int sum = 0;
  while(cin >> n and n != -1){
    if(is_diabolical(n)) ++sum;
  }
  int digits = numberofdigitslesssix(sum);
  for(int i = 0; i < digits; ++i) cout << '0';
  cout << sum << endl;
}