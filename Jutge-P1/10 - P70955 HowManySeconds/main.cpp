#include <iostream>

using namespace std;

int main() {

  unsigned long int years;
  unsigned long int days;
  unsigned long int hours;
  unsigned long int minutes;
  unsigned long int seconds;

  cin >> years >> days >> hours >> minutes >> seconds;

  days = days + (years * 365);
  hours = hours + (days * 24);
  minutes = minutes + (hours * 60);
  seconds = seconds + ( minutes * 60);

  cout << seconds << endl;

}