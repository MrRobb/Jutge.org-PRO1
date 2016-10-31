#include <iostream>

using namespace std;

int main() {

  string hair;
  string eyes;
  string nose;
  string mouth;

  cin >> hair >> eyes >> nose >> mouth;

  if (hair == "arrissats") cout << "@@@@@" << endl;
  else if (hair == "llisos") cout << "VVVVV" << endl;
  else if (hair == "pentinats") cout << "XXXXX" << endl;

  if (eyes == "aclucats") cout << ".-.-." << endl;
  else if (eyes == "rodons") cout << ".o-o." << endl;
  else if (eyes == "estrellats") cout << ".*-*." << endl;

  if (nose == "axafat") cout << "..0.." << endl;
  else if (nose == "arromangat") cout << "..C.." << endl;
  else if (nose == "aguilenc") cout << "..V.." << endl;

  if (mouth == "normal") cout << ".===." << endl;
  else if (mouth == "bigoti") cout << ".~~~." << endl;
  else if (mouth == "dents-sortides") cout << ".www." << endl;

}