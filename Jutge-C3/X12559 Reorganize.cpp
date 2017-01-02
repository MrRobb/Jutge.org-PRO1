//
// Created by Roberto Ariosa Hernández on 2/1/17.
//

#include <iostream>
#include <vector>

using namespace std;

// Returns a vector of size n > 0 with n integer values read from cin.
vector<int> read_vector(int n) {
  vector<int> v(n);
  for (int i = 0; i < n; ++i)
    cin >> v[i];
  return v;
}

// Prints a vector of size n > 0 in the cout.
void print_vector(const vector<int>& v) {
  for (int i = 0 ; i < int(v.size()) ; ++i) {
    if (i>0) cout<<" ";
    cout<<v[i];
  }
  cout<<endl;
}

// add functions or procedures here if you need them

// see the statement of the problem
vector<int> reorganize_vector(const vector<int>& v,int a,int b)
{
  // Write your implementation here.
  int size = v.size();
  vector<int> w(size);
  vector<int> one(0);
  vector<int> two(0);
  vector<int> thr(0);

  for(int i = 0; i < size; ++i){
    if(v[i] < a) one.push_back(v[i]);
    else if(v[i] > b) thr.push_back(v[i]);
    else two.push_back(v[i]);
  }

  int u = 0;
  for(int i = 0; i < one.size(); ++i) w[u++] = one[i];
  for(int i = 0; i < two.size(); ++i) w[u++] = two[i];
  for(int i = 0; i < thr.size(); ++i) w[u++] = thr[i];

  return w;
}

int main() {
  int n;
  while (cin >> n) {
    vector<int> v = read_vector(n);
    int a, b;
    cin >> a >> b;
    print_vector(reorganize_vector(v, a, b));
  }
}