#include <iostream>

using namespace std;

int main() {

  int n;
  cin >> n;

  for (int i = 0; i < n; i++){
    int a;
    int b;
    int pairs = 0;
    cin >> a;

    while(a != 0){
      cin >> b;

      if (b > a){
        ++pairs;
      }

      a = b;
    }

    cout << pairs << endl;
  }
}