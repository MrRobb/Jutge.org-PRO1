#include <iostream>

using namespace std;

void print_line(char c, string s, bool b) {

  cout << s << "('" << c << "') = ";
  if (b) cout << "true" << endl;
  else cout << "false" << endl;


}

int main() {

  // Pre: character, digit or punctuation mark.
  // Post: letter, a vowel, a consonant, an uppercase letter, a lowercase letter or a digit.

  char c;
  cin >> c;

  bool letter = false;
  bool vowel = false;
  bool consonant = false;
  bool uppercase = false;
  bool lowercase = false;
  bool digit = false;

  if (isalpha(c)){
    letter = true;
  }
  if (c == 'a' or
      c == 'A' or
      c == 'e' or
      c == 'E' or
      c == 'i' or
      c == 'I' or
      c == 'o' or
      c == 'O' or
      c == 'u' or
      c == 'U'){
    vowel = true;
  } else if (letter) {
    consonant = true;
  }

  if (letter and isupper(c)){
    uppercase = true;
  } else if (letter){
    lowercase = true;
  }
  else if (isdigit(c)){
    digit = true;
  }

  print_line(c, "letter", letter);
  print_line(c, "vowel", vowel);
  print_line(c, "consonant", consonant);
  print_line(c, "uppercase", uppercase);
  print_line(c, "lowercase", lowercase);
  print_line(c, "digit", digit);

}