//
// Created by Roberto Ariosa Hernández on 2/1/17.
//

#include <iostream>
#include <vector>

using namespace std;

vector<double> difference(const vector<double>& v1, const vector<double>& v2){
  int p1 = 0;
  int p2 = 0;
  int p3 = -1;
  int size1 = v1.size();
  int size2 = v2.size();

  vector<double> w(0);

  while(p1 < size1 and p2 < size2){
    if(v1[p1] < v2[p2] and p3 < 0){
      w.push_back(v1[p1]);
      ++p1;
      ++p3;
    } else if(v1[p1] < v2[p2] and w[p3] != v1[p1]) {
      w.push_back(v1[p1]);
      ++p1;
      ++p3;
    } else if (v1[p1] < v2[p2] and w[p3] == v1[p1]){
      ++p1;
    } else if(v1[p1] == v2[p2]) {
      ++p1;
    } else ++p2;
  }

  while(p1 < size1){
    if(p3 < 0){
      w.push_back(v1[p1]);
      ++p1;
      ++p3;
    } else if(w[p3] != v1[p1]){
      w.push_back(v1[p1]);
      ++p1;
      ++p3;
    } else {
      ++p1;
    }
  }

  return w;
}

int main(){

}