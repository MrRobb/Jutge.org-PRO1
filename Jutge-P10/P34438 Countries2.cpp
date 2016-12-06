#include <iostream>
#include <vector>

using namespace std;

// Not tried

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

int population(const Countries& p, double x){
  int populationsum = 0;
  int sizecountries = int(p.size());

  for(int i = 0; i < sizecountries; ++i){
    int provinces = 0;
    int populationCountry = 0;
    int sizeprovinces = int(p[i].provs.size());
    for(int j = 0; j < sizeprovinces; ++j){
      if (p[i].provs[j].gdp <= x){
        ++provinces;
      }
      populationCountry += p[i].provs[j].population;
    }
    if(provinces >= 2) populationsum += populationCountry;
  }

  return populationsum;
}

int main(){

}