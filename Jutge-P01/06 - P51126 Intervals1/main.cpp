#include <iostream>
using namespace std;

int main() {
  int start1,final1,start2,final2;
  int x,y;
  cin >> start1 >> final1 >> start2 >> final2;

  if (start1 >= start2){
    x = start1;
  } else if (start2 > start1) {
    x = start2;
  }

  if (final1 <= final2){
    y = final1;
  } else if (final2 < final1) {
    y = final2;
  }

  if (x > y){
    cout << "[]" << endl;
  } else {
    cout << "[" << x << "," << y << "]" << endl;
  }

}