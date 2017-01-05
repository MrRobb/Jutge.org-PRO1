//
// Created by Roberto Ariosa Hernández on 28/12/16.
//

#include <iostream>
#include <vector>

using namespace std;

string exit(int p, vector<int>& v){
  int size = v.size();
  int pini;
  while(v[p] != 0 and 0 <= p+v[p] and p+v[p] < size){
    pini = p;
    p = p+v[p];
    v[pini] = 0;
  }

  if(v[p] == 0) return "never";
  else if(p+v[p] < 0) return "left";
  else return "right";
}

int main(){

}