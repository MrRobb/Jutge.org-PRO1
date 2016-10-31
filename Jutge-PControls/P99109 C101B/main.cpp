#include <iostream>

using namespace std;

int main() {

  string s1;
  string s2;
  string s3;
  string min;

  cin >> s1 >> s2 >> s3;

  if (s1 < s2) min = s1;
  else min = s2;
  if (s3 < min) min = s3;

  cout << min << endl;

}