#include <iostream>

using namespace std;

void llegeix_hora(int& h, int& m, int& s){
  char aux;
  cin >> aux;
  while (cin >> aux and aux != '|'){
    if(aux == '*')h = h*2+1;
    else h = h*2;
  }
  while (cin >> aux and aux != '|'){
    if(aux == '*')m = m*2+1;
    else m = m*2;
  }
  while (cin >> aux and aux != '|'){
    if(aux == '*')s = s*2+1;
    else s = s*2;
  }
}

void escriu_hora(int h, int m, int s){
  cout << h << ':' << m << ':' << s << endl;
}

int main() {

  int n;
  cin >> n;
  for(int i = 0; i < n; ++i){
    int h = 0;
    int m = 0;
    int s = 0;
    llegeix_hora(h,m,s);
    escriu_hora(h,m,s);
  }

}