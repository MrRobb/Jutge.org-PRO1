#include <iostream>

using namespace std;

int main() {
  
  char ch;
  int x = 0;
  int y = 0;
  
  while(cin >> ch){
    if (ch == 'n'){
      y--;
    }
    else if (ch == 's'){
      y++;
    }
    else if (ch == 'e'){
      x++;
    }
    else if (ch == 'w'){
      x--;
    }
  }
  
  cout << '(' << x << ", " << y << ')' << endl;
  
}