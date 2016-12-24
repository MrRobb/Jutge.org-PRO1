#include <iostream>
#include <vector>

using namespace std;

struct Subject {
  string name;                // Subject’s name
  double mark;                // Between 0 and 10, -1 shows NP
};

struct Student {
  string name;             // Student’s name
  int idn;                 // Student’s IDN
  vector<Subject> subj;    // Subject list of the student
};

double mark(const vector<Student>& stu, int idn, string name){
  // Returns the mark of a student in a subject

  // Search the student
  int i = 0;
  int sizestudents = int(stu.size());
  bool encontrado = false;
  while(!encontrado and i < sizestudents){
    if(stu[i].idn == idn) encontrado = true;
    if(!encontrado)++i;
  }

  // Search the subject
  int j = 0;
  encontrado = false;
  int sizesubjects = int(stu[i].subj.size());
  if (i < sizestudents){
    while(!encontrado and j < sizesubjects){
      if(stu[i].subj[j].name == name) encontrado = true;
      if(!encontrado) ++j;
    }

    // Return if correct
    if (j < sizesubjects and stu[i].subj[j].mark != -1) return stu[i].subj[j].mark;
    else return -1;
  } else return -1;
}

double mean(const vector<Subject>& subj){
  // Returns the average mark of a group of subjects
  double avg = -1;
  int size = int(subj.size());
  int totalsubjects = size;
  for(int i = 0; i < size; ++i){
    if(subj[i].mark != -1){
      if(avg != -1) avg += subj[i].mark;
      else avg = subj[i].mark;
    } else --totalsubjects;
  }

  if(totalsubjects != 0) return avg / (double)totalsubjects;
  else return -1;
}

void count(const vector <Student>& stu, int idn , string name, int& counter ){
  double compmark = mark(stu,idn,name);
  counter = 0;

  int size = int(stu.size());
  for(int i = 0; i < size; ++i){
    if(mean(stu[i].subj) > compmark) ++counter;
  }

  cout << counter << endl;
}

int main() {
  int n;
  cin >> n;
  vector<Student> stu(n);
  Student stud;
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> stud.name >> stud.idn >> x;
    vector<Subject> subj(x);
    Subject sub;
    for (int j = 0; j < x; ++j) {
      cin >> sub.name >> sub.mark;
      subj[j] = sub;
    }
    stud.subj = subj;
    stu[i] = stud;
  }
  int counter;
  int idn;
  string name;
  while (cin >> idn and cin >> name) {
    count(stu,idn,name,counter);
  }
}