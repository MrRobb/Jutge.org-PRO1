#include <iostream>

using namespace std;

int main() {

  int n;
  cin >> n;

  char c;

  int diagonal1 = 0;
  int diagonal2 = 0;
  int sum = 0;

  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cin >> c;
      if (i == j){
        diagonal1 += (int)(c - '0');
      }
      if ((n-(i) == (j+1))){
        diagonal2 += (int)(c - '0');
      }
      if (n % 2 != 0 and i == (n / 2) and j == (n / 2)){
        diagonal2 -= (int)(c - '0');
      }
    }
  }

  sum = diagonal1 + diagonal2;
  cout << sum << endl;



}