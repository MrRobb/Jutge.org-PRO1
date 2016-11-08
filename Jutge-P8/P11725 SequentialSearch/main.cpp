#include <iostream>
#include <vector>

using namespace std;

bool exists(int x, const vector<int>& v){
  bool encontrado = false;
  int i = 0;

  while (!encontrado and i < v.size()){
    if (x == v[i]) encontrado = true;
    i++;
  }
  return encontrado;
}

int main() {



}