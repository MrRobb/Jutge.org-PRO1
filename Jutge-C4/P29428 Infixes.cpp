//
// Created by Roberto Ariosa Hernández on 6/1/17.
//

#include <iostream>
#include <vector>

using namespace std;

bool contains_at(const string& s1, const string& s2, int pos) {
  for (int i = 0; i < s2.size(); ++i) {
    if (s1[pos+i] != s2[i]) return false;
  }
  return true;
}

bool contains(string s1, string s2) {
  // Pre s1.size() >= s2
  for (int i = 0; i < s1.size(); ++i) {
    if (contains_at(s1, s2, i)) return true;
  }
  return false;
}

int main(){
  // Fill
  int n;
  cin >> n;
  vector<string> v(n);
  for (int i = 0; i < n; ++i) cin >> v[i];

  // Search
  for (int i = 0; i < n; ++i) {
    cout << v[i] << ":";
    for (int j = 0; j < n; ++j) {
      if (contains(v[i], v[j])) cout << " " << v[j];
    }
    cout << endl;
  }
}