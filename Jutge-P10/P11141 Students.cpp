#include <iostream>
#include <vector>

using namespace std;

struct Student {
  int idn;
  string name;
  double mark;        // The mark is a value between 0 and 10, or -1 that represents NP
  bool repeater;
};

// Maybe the students are repeated in the vector (so, maybe it does not work)

void information(const vector<Student>& stu, double& min, double& max, double& avg){
  min = -1;
  max = -1;
  avg = -1;
  int repeaters = 0;

  int size = int(stu.size());

  for(int i = 0; i < size; ++i){
    if (!stu[i].repeater){
      if (min == -1){
        min = stu[i].mark;
        max = stu[i].mark;
        avg = stu[i].mark;
      } else {
        if(stu[i].mark < min) min = stu[i].mark;
        if(stu[i].mark > max) max = stu[i].mark;
        avg += stu[i].mark;
      }
    } else {
      ++repeaters;
    }
  }

  avg = avg / (size - repeaters);
}

int main(){

}