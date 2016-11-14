#include <iostream>

using namespace std;

char complement(char c){
  if (c == 'A') return 'T';
  else if (c == 'T') return 'A';
  else if (c == 'C') return 'G';
  else return 'C';
}

int main() {

  char c;
  int state = 0;

  while (cin >> c){
    if (state == 3){
      cout << complement(c);
    } else {
      if (state == 0 and c == 'T') state++;
      else if (state == 1 and c == 'A') state++;
      else if (state == 2 and c == 'G') state++;

      else if (c == 'T') state = 1;
      else state = 0;
    }
  }
  cout << endl;
}