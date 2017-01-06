//
// Created by Roberto Ariosa Hernández on 6/1/17.
//

#include <iostream>
#include <vector>

using namespace std;

int maxpos(const vector<double>& v,int from,int to){
  int pos = from;
  double max = v[from];
  for(int i = from; i <= to; ++i){
    if(v[i] > max){
      max = v[i];
      pos = i;
    }
  }
  return pos;
}

void calcula_posicions (const vector<double>& v,int& p,int& q){
  p = maxpos(v,0,v.size()-1);
  q = maxpos(v,0,p-1);

  double sum = 0;
  for(int i = q; i <= p; ++i) sum += v[i];
  cout << sum/(double)(p-q+1) << endl;
}

int main(){
  cout.setf(ios::fixed);
  cout.precision(6);

  int n;
  while(cin >> n){
    vector<double> v(n);
    for(int i = 0; i < n; ++i) cin >> v[i];
    int p,q;
    calcula_posicions(v,p,q);
  }
}