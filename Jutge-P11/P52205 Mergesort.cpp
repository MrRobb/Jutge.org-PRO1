#include <iostream>
#include <vector>

using namespace std;

void merge(vector<double>& v, vector<double> left, vector<double> right){
  int i = 0;
  int j = 0;
  int sizeleft = int(left.size());
  int sizeright = int(right.size());
  int counter = 0;
  while (i < sizeleft and j < sizeright) {
    if(left[i] < right[j]) v[counter++] = left[i++];
    else if (left[i] > right[j]) v[counter++] = right[j++];
    else {
      v[counter++] = left[i++];
      v[counter++] = right[j++];
    }
  }
  while (i < sizeleft) v[counter++] = left[i++];
  while (j < sizeright) v[counter++] = right[j++];
}

void mergesort(vector<double>& v){
  int size = v.size();
  int j = 0;

  // Only merge if the vector has more than one element
  if(size/2 >= 1){

    // Create 2 vectors
    vector<double> left(size/2);
    vector<double> right(size-(size/2));

    // Fill them
    for(int i = 0; i < size/2; ++i) left[i] = v[i];
    for(int i = size/2; i < size; ++i) right[j++] = v[i];

    // Split them and join them again after sorting
    mergesort(left);
    mergesort(right);
    merge(v,left,right);
  }
}

int main(){

}