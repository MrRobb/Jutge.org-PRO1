#include <iostream>
#include <cmath>

using namespace std;

int main() {

  int a,b,c,d;
  int minx = 0;
  int miny = 0;
  int minz = 0;
  bool all_zeros = false;
  int i = 0;

  while (cin >> a >> b >> c >> d){
    if (a == 0 and c == 0){
      all_zeros = true;

    } else if (a == 0) {
      if (miny > c and i != 0){
        minx = 0;
        miny = c;
        minz = c;
      } else if (i == 0) {
        minx = 0;
        miny = c;
        minz = c;
        i++;
      }

    } else if (c == 0) {
      if (minx > a and i != 0){
        minx = a;
        miny = 0;
        minz = a;
      } else if (i == 0) {
        minx = a;
        miny = 0;
        minz = a;
        i++;
      }
    }
  }

  if (all_zeros) cout << "0^3 + 0^3 = 0^3" << endl;
  else if (minz != 0) cout << minx << "^3 + " << miny << "^3 = " << minz << "^3" << endl;
  else cout << "No solution!" << endl;

}