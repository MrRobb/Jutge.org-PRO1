#include <iostream>
#include <vector>

using namespace std;

int evaluate(const vector<int>& p, int x){
  int result = 0;
  for (int i = int(p.size())-1; i >= 0; i--){
    result = (result)*x +p[i];
  }
  return result;
}

int main() {

}