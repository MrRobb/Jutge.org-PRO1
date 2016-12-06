#include <iostream>

using namespace std;

int main() {

  long long rows;
  long long columns;

  cin >> rows;
  cin >> columns;

  long long sum = 0;
  char character;

  for (int i = 0; i < rows; i++){
    for (int j = 0; j < columns; j++){
      cin >> character;
      sum = sum + ((int)character - ((int)'0'));
    }
  }

  if (sum < 0){
    sum = 0;
  }

  if (rows > 0 and columns > 0 and sum >= 0){
    cout << sum << endl;
  }
}