//
// Created by Roberto Ariosa Hernández on 29/12/16.
//

#include <iostream>
#include <vector>

using namespace std;

void insert(vector<double>& v){
  int size = v.size();
  for(int i = 1; i < size; ++i){
    double x = v[i];
    int j = i;
    while(j > 0 and v[j-1] > x){
      v[j] = v[j-1];
      --j;
    }
    v[j] = x;
  }
}

int main(){

}