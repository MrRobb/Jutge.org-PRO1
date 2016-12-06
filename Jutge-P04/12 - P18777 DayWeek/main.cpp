#include <iostream>
#include <cmath>

using namespace std;

string day_of_the_week (int d, int m, int y){

  int new_month = m-2;
  int new_year = y;

  if ((m-2) <= 0){
    new_month = new_month+12;
    new_year = new_year-1;
  }

  int century = (new_year / 100);
  int year_in_century = new_year % 100;

  int f;

  f = (int) floor(2.6 * new_month - 0.2)
      + d
      + year_in_century
      + (int) floor(year_in_century / 4)
      + (int) floor(century / 4)
      - (2 * century);

  if (f >= 0){
    f %= 7;
  } else {
    f = 7 + f%7;
  }

  if (f == 0) return "Sunday";
  else if (f == 7) return "Sunday";
  else if (f == 1) return "Monday";
  else if (f == 2) return "Tuesday";
  else if (f == 3) return "Wednesday";
  else if (f == 4) return "Thursday";
  else if (f == 5) return "Friday";
  else return "Saturday";
}

int main() {
}