#include <iostream>
#include <vector>
using namespace std;


int position(double x, const vector<double>& v, int left, int right){
  // divide y vencerás!
  // Write an efficient recursive function that returns the position of x in the subvector v[left..right].
  // The function must return −1 if x does not belong to v[left..right] or if left > right.

  int middle = (right-left)/2 + left;

  if(left > right) return -1;
  if (left == right){
    if(v[left] == x)  return left;
    else return -1;
  }

  if (v[middle+1] == x) return middle+1;
  else if(v[middle+1] < x) return position(x,v,middle+2,right);
  else return position(x,v,left,middle);
}

int main() {

}