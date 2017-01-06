//
// Created by Roberto Ariosa Hernández on 6/1/17.
//

#include <iostream>
#include <vector>

using namespace std;

struct Pair {
  int value;  // Different than 0
  int pos;    // Greater or equal to 0
};

typedef vector<Pair> Com_Vec;

Com_Vec sum(const Com_Vec& v1, const Com_Vec& v2){
  int i = 0;
  int j = 0;
  int size1 = v1.size();
  int size2 = v2.size();

  Com_Vec v(0);

  Pair p;
  while(i < size1 and j < size2){
    if(v1[i].pos == v2[j].pos){
      p.pos = v1[i].pos;
      p.value = v1[i].value + v2[j].value;
      if(p.value != 0) v.push_back(p);
      ++i;
      ++j;
    } else if(v1[i].pos < v2[j].pos){
      p.pos = v1[i].pos;
      p.value = v1[i].value;
      v.push_back(p);
      ++i;
    } else {
      p.pos = v2[j].pos;
      p.value = v2[j].value;
      v.push_back(p);
      ++j;
    }
  }

  while(i < size1){
    p.pos = v1[i].pos;
    p.value = v1[i].value;
    v.push_back(p);
    ++i;
  }
  while(j < size2){
    p.pos = v2[j].pos;
    p.value = v2[j].value;
    v.push_back(p);
    ++j;
  }

  return v;
}

void read(Com_Vec& v){
  // Read a vector and stores it in the compressed one 'v';
  Pair p;
  char c;
  for(int i = 0; i < v.size(); ++i){
    cin >> p.value;
    cin >> c;
    cin >> p.pos;
    v[i] = p;
  }
}

int main() {
  int k;
  cin >> k;
  for (int i = 0; i < k; ++i) {
    int n;

    cin >> n;
    Com_Vec a(n);
    read(a);

    cin >> n;
    Com_Vec b(n);
    read(b);

    Com_Vec r = sum(a, b);
    cout << r.size();

    for (int x = 0; x < r.size(); ++x) {
      cout << " " << r[x].value << ";" << r[x].pos;
    }

    cout << endl;
  }
}