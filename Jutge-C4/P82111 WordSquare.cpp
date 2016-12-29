//
// Created by Roberto Ariosa Hernández on 29/12/16.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dichotomic(string x, const vector<string>& w, int esq, int dre) {
  if (esq > dre) return -1;
  int pos = (esq + dre)/2;                // posicio central de v[esq..dre]
  if (x < w[pos]) return dichotomic(x, w, esq, pos - 1);
  if (x > w[pos]) return dichotomic(x, w, pos + 1, dre);
  return pos;
}

int main(){
  // Create the vector of words
  int nwords;
  cin >> nwords;
  vector<string> w(nwords);
  for(int i = 0; i < nwords; ++i) cin >> w[i];
  sort(w.begin(),w.end());

  // For each case
  int len;
  cin >> len;
  while(len != 0){

    // Create the matrix
    string s;
    for(int i = 0; i < len; ++i) s.push_back(' ');
    vector<string> horizontal(len);
    vector<string> vertical(len,s);

    // Fill the matrix
    for(int i = 0; i < len; ++i){
      cin >> s;
      horizontal[i] = s;
      for(int j = 0; j < len; ++j){
        vertical[j][i] = s[j];
      }
    }

    bool equal = true;
    int i = 0;
    while(i < len and equal){
      if(horizontal[i] != vertical[i] or dichotomic(horizontal[i],w,0,nwords-1) < 0) equal = false;
      ++i;
    }
    if(equal) cout << "YES" << endl;
    else cout << "NO" << endl;

    cin >> len;
  }

}