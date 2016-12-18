#include <iostream>
#include <vector>
using namespace std;


int position_maximum(const vector<double>& v, int m){
  double max = v[0];
  int position = 0;
  for(int i = 0; i <= m; ++i){
    if(v[m-i] >= max) {
      position = m-i;
      max = v[m-i];
    }
  }
  return position;
}


int main() {

}
