//
// Created by Roberto Ariosa Hernández on 29/12/16.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Word {
  int n;
  string s;
};

bool comp(Word w1, Word w2){
  // Return true if a word has appeared more times than another.
  // Or if it has appeared the same times but it is lower alphabetically.
  if(w1.n > w2.n) return true;
  else return w1.n == w2.n and w1.s < w2.s;
}

int main(){
  int words;
  while (cin >> words){
    // Create vector
    vector<string> v(words);
    vector<Word> w(words);
    for(int i = 0; i < words; ++i){
      cin >> v[i];
      w[i].n = 0;
      w[i].s = "";
    }
    sort(v.begin(),v.end());

    // Check how many repeated words are in the vector
    int u = 0;
    if(words != 0) w[u].s = v[0];
    for(int i = 0; i < words; ++i){
      if(w[u].s != v[i]){
        ++u;
        w[u].s = v[i];
        w[u].n = 1;
      } else {
        ++w[u].n;
      }
    }

    // Sort
    sort(w.begin(),w.end(),comp);

    // Print
    for(int i = 0; i < words; ++i){
      if(w[i].n > 0) cout << w[i].n << ' ' << w[i].s << endl;
    }

    cout << "----------" << endl;

  }
}