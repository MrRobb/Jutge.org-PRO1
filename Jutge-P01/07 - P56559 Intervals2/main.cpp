#include <iostream>
using namespace std;

int main() {
  int start1, final1, start2, final2;
  cin >> start1 >> final1 >> start2 >> final2;
  char out;

  if ((start1 == start2) && (final1 == final2)){
    out = '=';
  }

  else if (((start1 >= start2) && (final2 > final1)) || ((start1 > start2) && (final2 >= final1))){
    out = '1';
  }

  else if (((start2 >= start1) && (final1 > final2)) || ((start2 > start1) && (final1 >= final2))){
    out = '2';
  }

  else {
    out = '?';
  }

  cout << out << endl;

}