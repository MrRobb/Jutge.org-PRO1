#include <iostream>
#include <sstream>

using namespace std;

int main() {

  int n;
  string zero = "0";
  cin >> n;
  string number = "";

  if (n == 0){
    number = number + zero;
  }

  while (n > 0) {

    int num = (n % 2);
    string result;
    ostringstream convert;
    convert << num;
    result = convert.str();

    number = number + result;
    n = n / 2;

  }

  cout << number << endl;

}