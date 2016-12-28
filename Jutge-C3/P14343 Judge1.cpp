#include <iostream>
#include <vector>

using namespace std;

struct Submission {
  string idn;
  string exer;
  int time;
  string res;
};

typedef vector<Submission> History;

struct Student {
  string s;
  int n;
  vector<string> v;
};

Student maxgreensubmissions(const History& all){
  Student maxgreensub;
  maxgreensub.n = 0;
  for(int i = 0; i < all.size(); ++i){
    int greens = 0;
    for(int j = i+1; j < all.size(); ++j){
      if(all[i].idn == all[j].idn and all[j].res == "green") ++greens;
    }
    if(greens > maxgreensub.n or (greens == maxgreensub.n and all[i].idn < maxgreensub.s)){
      maxgreensub.s = all[i].idn;
      maxgreensub.n = greens;
    }
  }
  return maxgreensub;
}

Student maxgreenexercises(const History& all){
  Student max;
  max.n = 0;
  vector<string> v(0);
  max.v = v;

  Student comp;
  comp.n = 0;
  max.v = v;

  for(int i = 0; i < all.size(); ++i){
    if(all[i].res == "green"){
      comp.s = all[i].idn;
      comp.n = 1;
      comp.v = v;
      comp.v.push_back(all[i].exer);
      for(int j = i; j < all.size(); ++j){
        if(all[j].idn == comp.s and all[j].res == "green"){
          bool encontrado = false;
          for(int k = 0; k < comp.v.size(); ++k){
            if(comp.v[k] == all[j].exer) encontrado = true;
          }
          if(!encontrado){
            ++comp.n;
            comp.v.push_back(all[j].exer);
          }
        }
      }
      if(comp.n > max.n or (comp.n == max.n and comp.s < max.s)){
        max.s = comp.s;
        max.n = comp.n;
        max.v = comp.v;
      }
    }
  }

  return max;
}

Student maxredexercises(const History& all){
  vector<string> v(0);

  Student max;
  max.n = 0;
  max.v = v;

  Student comp;
  comp.n = 0;
  max.v = v;

  for(int i = 0; i < all.size(); ++i){ // For each student
    comp.s = all[i].idn;
    for(int j = i; j < all.size(); ++j){ // For each exercise
      if(all[i].idn == all[j].idn){
        bool isred = true;
        for(int k = 0; k < all.size(); ++k){ // See if there is a red or something else
          if(all[i].idn == all[k].idn and all[j].exer == all[k].exer){
            if(all[k].res == "green" or all[k].res == "yellow") isred = false;
          }
        }
        // if is red --> look in the vector; if it's not --> add it
        if (isred){
          bool encontrado = false;
          for(int k = 0; k < comp.v.size(); ++k){
            if(all[j].exer == comp.v[k]) encontrado = true;
          }
          if(!encontrado){
            ++comp.n;
            comp.v.push_back(all[j].exer);
          }
        }
      }
    }
    if(comp.n > max.n or (comp.n == max.n and comp.s < max.s)){
      max.s = comp.s;
      max.n = comp.n;
      max.v = comp.v;
    }
  }

  return max;
}

Student maxdifferentexercises(const History& all){
  vector<string> v(0);

  Student max;
  max.n = 0;
  max.v = v;

  Student comp;
  comp.n = 0;
  max.v = v;

  for(int i = 0; i < all.size(); ++i){
    comp.s = all[i].idn;
    for(int j = i; j < all.size(); ++j){
      if(all[j].idn == all[i].idn){
        bool encontrado = false;
        for(int k = 0; k < comp.v.size(); ++k){
          if(comp.v[k] == all[j].exer) encontrado = true;
        }
        if(!encontrado) comp.v.push_back(all[j].exer);
      }
    }
    if (max.v.size() < comp.v.size() or (max.v.size() == comp.v.size() and max.s > comp.s)){
      max.s = comp.s;
      max.v = comp.v;
    }
  }

  return max;
}

Student lastsubmission(const History& all){
  Student last;
  last.n = 0;

  for(int i = 0; i < all.size(); ++i){
    if(all[i].time > last.n){
      last.s = all[i].idn;
      last.n = all[i].time;
    }
  }

  return last;
}


int main(){
  int n;
  cin >> n;
  History all(n);
  for(int i = 0; i < n; ++i){
    cin >> all[i].idn;
    cin >> all[i].exer;
    cin >> all[i].time;
    cin >> all[i].res;
  }

  // Green Submissions
  Student maxgreensubs = maxgreensubmissions(all);

  // Green Exercises
  Student maxgreenexer = maxgreenexercises(all);

  // Red Exercises
  Student maxred = maxredexercises(all);

  // Different Exercises
  Student maxdifferent = maxdifferentexercises(all);

  // Last Submission
  Student lastSub = lastsubmission(all);

  // Print
  if(maxgreensubs.n == 0) cout << "student with more green submissions:       " << "-" << endl;
  else cout << "student with more green submissions:       " << maxgreensubs.s << " (" << maxgreensubs.n << ')' << endl;

  if(maxgreenexer.n == 0) cout << "student with more green exercises:         " << "-" << endl;
  else cout << "student with more green exercises:         " << maxgreenexer.s << " (" << maxgreenexer.n << ')' << endl;

  if(maxred.n == 0) cout << "student with more red exercises:           " << "-" << endl;
  else cout << "student with more red exercises:           " << maxred.s << " (" << maxred.n << ')' << endl;

  if(maxdifferent.v.size() == 0) cout << "student with more tried exercises:         " << "-" << endl;
  else cout << "student with more tried exercises:         " << maxdifferent.s << " (" << maxdifferent.v.size() << ')' << endl;

  cout << "student who has done the last submission:  " << lastSub.s << endl;
}