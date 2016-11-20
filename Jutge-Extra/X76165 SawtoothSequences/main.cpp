#include <iostream>

using namespace std;

bool sawtooth(int a, int b, bool mesgran, int i) {
  if (i == 0) {
    cin >> a;
    if (cin >> b) {
      if (a == b) return false;
      else {
        ++i;
        mesgran = a > b;
        return sawtooth(b, 0, mesgran, i);
      }
    } else {
      return true;
    }
  } else if (cin >> b){
    if (mesgran and b > a) return sawtooth(b, 0, !mesgran, i);
    else if (!mesgran and b < a) return sawtooth(b, 0, !mesgran, i);
    else return false;
  } else {
    return true;
  }
}

int main() {

  cout << sawtooth(0, 0, true, 0);

}