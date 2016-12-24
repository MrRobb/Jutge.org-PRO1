#include <iostream>
#include <vector>

using namespace std;

bool es_palindrom(string s){
  int size = int(s.size());
  for(int i = 0; i <= size/2; ++i){
    if (s[i] != s[size-i-1]) return false;
  }
  return true;
}

int main(){

  int n;
  cin >> n;
  while (n != 0){
    // Read
    vector<string> v(n);
    for(int i = 0; i < n; ++i) cin >> v[i];

    // Compute
    int max = 0;
    for(int i = 0; i < n; ++i){
      if(es_palindrom(v[i]) and v[i].length() > max) max = v[i].length();
    }

    // Print
    cout << "-----" << endl;
    bool some = false;
    for(int i = 0; i < n; ++i){
      if(es_palindrom(v[i]) and v[i].length() == max){
        cout << v[i] << endl;
        some = true;
      }
    }

    if(!some) cout << "cap palindrom" << endl;
    cin >> n;
  }

  cout << "-----" << endl;


}