#include <iostream>
#include <vector>

using namespace std;

// Wrong Answer -> will be solved on 8/12 - 13:00

struct Province {
  string name;
  string capital;
  int population;
  int area;
  double gdp;
};

struct Country {
  string name;
  string capital;
  vector<Province> provs;
};

typedef vector<Country> Countries;

double gdp(const Countries& p, char c, double d){
  double sum = 0;
  int sizecountries = int(p.size());

  for(int i = 0; i < sizecountries; ++i){
    if (p[i].name[0] == c){
      // For the countries' names that starts with the letter c.

      int sizeprovinces = int(p[i].provs.size());

      for (int j = 0; j < sizeprovinces; ++j){
        if (p[i].provs[j].population / p[i].provs[j].area > d){
          // For the provinces with density STRICTLY greater than d.

          sum += p[i].provs[j].gdp;
        }
      }
    }
  }

  return sum;
}

int main(){

}