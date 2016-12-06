#include <iostream>

using namespace std;

void Hanoi(int n, char from, char to, char out){
  if (n > 0){
    Hanoi(n-1,from,out,to);
    cout << from << " => " << to << endl;
    Hanoi(n-1,out,to,from);
  }
}

int main() {
  int n;
  cin >> n;
  Hanoi(n,'A','C','B');
}