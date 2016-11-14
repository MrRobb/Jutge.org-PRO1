#include <iostream>
#include <vector>

using namespace std;

bool friends(int a, int b){
  int sum = 0;
  for (int i = 1; i <= a/2; ++i){
    if (a%i == 0) sum += i;
  }

  if (sum != b) return false;
  else sum = 0;

  for (int j = 1; j <= b/2; ++j){
    if (b%j == 0) sum += j;
  }

  return sum == a;
}

int main() {
  int n1,n2;
  int i = 0;

  while(cin >> n1 >> n2){
    if (friends(n1,n2) and n1 != n2) {
      if (i == 0) {
        cout << "(" << n1 << " " << n2 << ")";
        ++i;
      } else {
        cout << "," << "(" << n1 << " " << n2 << ")";
      }
    }
  }
  cout << endl;


}