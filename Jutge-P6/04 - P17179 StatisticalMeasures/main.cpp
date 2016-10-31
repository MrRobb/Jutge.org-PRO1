#include <iostream>

using namespace std;

int main() {
  cout.setf(ios::fixed);
  cout.precision(4);

  int sequences;
  cin >> sequences;

  int nums;

  for (int i = 0; i < sequences; i++){ // CADA FILA
    cin >> nums;
    double num;
    double max;
    double min;
    double average;

    for (int j = 0; j < nums; j++){ // CADA NÚMEROS
      cin >> num;

      if (j == 0){
        max = num;
        min = num;
        average = num;
      } else {
        if (num > max){
          max = num;
        }
        if (num < min){
          min = num;
        }

        average += num;

      }

    }

    average /= nums;
    cout << min << ' ' << max << ' ' << average << endl;
  }
}