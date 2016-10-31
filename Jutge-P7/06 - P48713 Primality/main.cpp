#include <iostream>
#include <vector>

using namespace std;

void is_prime(long x){
  bool e = 1;
  int i = 2;
  if (x == 0){
    cout << x << " is not prime" << endl;
    e = 0;
  }
  while (e == 1 and i*i <= x){
    if (x%i == 0) {
      cout << x << " is not prime" << endl;
      e = 0;
    }
    i++;
  }
  if (e)cout << x << " is prime" << endl;
}

int main() {
  unsigned long sequence;
  long num;
  cin >> sequence;
  vector<long> v(sequence);
  for (int i = 0; i < sequence; i++){
    cin >> num;
    v[i] = num;
    is_prime(v[i]);
  }
}