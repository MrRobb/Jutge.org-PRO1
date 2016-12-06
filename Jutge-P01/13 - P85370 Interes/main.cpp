#include <iostream>
using namespace std;


int main() {

  cout.setf(ios::fixed);
  cout.precision(4);
  long double money, interest, years, final;
  string simorcom;
  cin >> money >> interest >> years >> simorcom;


  if (years == 0){

    final = money + (money * (interest / 100) * years);

  }

  else if (simorcom == "simple") {

    final = money + (money * (interest / 100) * years);

  }

  else {

    final = money + (money * (interest / 100));
    money = final;

    for(int i = 1; i < years ; i++ ){
      final = money + (money * (interest / 100));
      money = final;
    }

  }

  cout << final << endl;
}