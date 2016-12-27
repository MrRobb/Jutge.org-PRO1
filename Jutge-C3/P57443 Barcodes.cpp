#include <iostream>

using namespace std;

int main(){
  string n;
  while(cin >> n){
    int sum = 0;
    for(int i = 11; i >= 0; --i){
      if(i%2 == 0) sum += n[i]-48;
      else sum += 3*(n[i]-48);
    }
    int digit = 10 - sum%10;
    if (digit == 10) digit = 0;
    cout << n << digit << endl;
  }
}