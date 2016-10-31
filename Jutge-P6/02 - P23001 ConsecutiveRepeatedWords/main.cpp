#include <iostream>

using namespace std;

int main() {

  string s1;
  string s2;
  string sobjective;
  int consecutive = 1;
  int maxconsecutive = 1;

  cin >> sobjective;
  s1 = sobjective;

  while (cin >> s2){
    if (s2 == sobjective and s2 == s1){
      consecutive++;

      if (consecutive > maxconsecutive){
        maxconsecutive = consecutive;
      }
    } else {
      consecutive = 1;
    }
    s1 = s2;
  }

  cout << maxconsecutive << endl;

}