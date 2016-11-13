#include <iostream>
#include <vector>

using namespace std;

vector<int> concatenation(const vector<int>& v1, const vector<int>& v2){
  unsigned long size = v1.size() + v2.size();
  vector<int> v(size);

  for (int i = 0; i < v1.size(); i++){
    v[i] = v1[i];
  }

  for (int j = 0; j < v2.size(); j++){
    v[v1.size()+j] = v2[j];
  }

  return v;
}

int main() {



}