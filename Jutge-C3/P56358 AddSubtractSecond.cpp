#include <iostream>

using namespace std;

struct Time {
  int hour, minute, second;
};

void one_second(const Time& t, Time& t1, Time& t2){
  // Initialize as equal
  t1.second = t.second;
  t1.minute = t.minute;
  t1.hour = t.hour;
  t2.second = t.second;
  t2.minute = t.minute;
  t2.hour = t.hour;

  // +1
  if (t.second == 59){
    if(t.minute == 59){
      if (t.hour == 23) t1.hour = 0;
      else t1.hour = t.hour+1;

      t1.minute = 0;
    } else t1.minute = t.minute+1;

    t1.second = 0;
  } else t1.second = t.second+1;

  // -1
  if (t.second == 0){
    if(t.minute == 0){
      if (t.hour == 0) t2.hour = 23;
      else t2.hour = t.hour-1;

      t2.minute = 59;
    } else t2.minute = t.minute-1;

    t2.second = 59;
  } else t2.second = t.second-1;
}

void print_time(Time& t){
  cout << t.hour << ' ' << t.minute << ' ' << t.second << endl;
}

int main(){
  Time t,t1,t2;
  while(cin >> t.hour >> t.minute >> t.second){
    one_second(t,t1,t2);
    print_time(t1);
    print_time(t2);
  }
}