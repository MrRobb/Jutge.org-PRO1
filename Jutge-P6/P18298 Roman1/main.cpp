#include <iostream>

using namespace std;

void write(int n, int value){
  string s;
  if (n == 1) s = "I";
  if (n == 2) s = "II";
  if (n == 3) s = "III";
  if (n == 4) s = "IV";
  if (n == 5) s = "V";
  if (n == 6) s = "VI";
  if (n == 7) s = "VII";
  if (n == 8) s = "VIII";
  if (n == 9) s = "IX";

  for (int i = 0; i < s.size(); i++){
    if (value == 1000 and s[i] == 'I') cout << 'M';
    else if (value == 100 and s[i] == 'I') cout << 'C';
    else if (value == 100 and s[i] == 'V') cout << 'D';
    else if (value == 100 and s[i] == 'X') cout << 'M';
    else if (value == 10 and s[i] == 'I') cout << 'X';
    else if (value == 10 and s[i] == 'V') cout << 'L';
    else if (value == 10 and s[i] == 'X') cout << 'C';
    else cout << s[i];
  }
}

int main() {

  int n;
  int one,ten,hundred,thousand;

  while (cin >> n){
    // Initialize them all to 0
    thousand = n/1000;
    hundred = (n%1000)/100;
    ten = ((n%1000)%100)/10;
    one = ((n%1000)%100)%10;

    cout << n << " = ";
    write(thousand,1000);
    write(hundred,100);
    write(ten,10);
    write(one,1);
    cout << endl;
  }

}