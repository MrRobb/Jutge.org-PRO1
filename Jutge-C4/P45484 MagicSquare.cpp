//
// Created by Roberto Ariosa Hernández on 28/12/16.
//

#include <iostream>
#include <vector>

using namespace std;

bool magic_square(const vector< vector<int> >& t){
  // Check rows and columns AT THE SAME TIME
  int n = t.size();
  int sumrows = 0;
  int sumcolumns = 0;
  int sumdiagonal1 = 0;
  int sumdiagonal2 = 0;


  int sum = 0;
  for(int k = 0; k < n; ++k) sum += t[0][k];

  bool equal = true;
  int i = 0;
  while(i < n and equal){
    sumrows = 0;
    sumcolumns = 0;
    int j = 0;
    while(j < n){
      sumrows += t[i][j];
      sumcolumns += t[j][i];
      if(t[i][j] > n*n or t[i][j] < 1) equal = false;
      ++j;
    }
    if(sumrows != sum or sumcolumns != sum) equal = false;
    ++i;
  }
  if(!equal) return false;

  // Check diagonals
  for(int k = 0; k < n; ++k){
    sumdiagonal1 += t[k][k];
    sumdiagonal2 += t[n-k-1][n-k-1];
  }
  return !(sumdiagonal1 != sum or sumdiagonal2 != sum);
}

int main(){

}