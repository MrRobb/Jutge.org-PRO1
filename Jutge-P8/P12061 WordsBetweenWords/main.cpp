#include <iostream>

using namespace std;

int main() {

  bool start = false;
  bool finish = false;
  int sum = 0;
  string s;

  while (cin >> s and !finish){
    if (s == "beginning" and !start) start = true;

    if (start and s != "end" and s != "beginning") sum++;

    if (s == "end" and start) {
      finish = true;
      cout << sum << endl;
    }
  }

  if (!start or !finish) cout << "wrong sequence" << endl;

}