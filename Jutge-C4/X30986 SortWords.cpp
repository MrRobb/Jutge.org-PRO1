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
    vector<Word> w(0);
    Word s;
    for(int i = 0; i < words; ++i){
      cin >> s.s;
      bool found = false;
      for(int j = 0; j < w.size(); ++j){   // Search if it is already in the vector
        if(s.s == w[j].s){
          ++w[j].n;
          found = true;
        }
      }
      if(!found){
        w.push_back(s);
        w[w.size()-1].n = 1;
      }
    }

    // Sort
    sort(w.begin(),w.end(),comp);

    // Print
    int size = w.size();
    for(int i = 0; i < size; ++i){
      cout << w[i].n << ' ' << w[i].s << endl;
    }

    cout << "----------" << endl;

  }
}