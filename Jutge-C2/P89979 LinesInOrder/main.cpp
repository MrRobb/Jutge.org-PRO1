#include <iostream>

using namespace std;

int main() {

  int found = 0;

  int words;
  int j = 1;
  while(cin >> words and !found){
    bool order = true;
    string s1 = "";
    string s2 = "";

    for (int i = 0; i < words; i++){
      s1 = s2;
      cin >> s2;
      if (s2 < s1) order = false;
    }

    if (order) found = j;
    j++;
  }

  if (found) cout << "The first line in increasing order is " << found << "." << endl;
  else cout << "There is no line in increasing order." << endl;
}