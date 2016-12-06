#include <iostream>
#include <vector>

using namespace std;

void printvector(vector<char>& v){
  int size = int(v.size());
  for (int i = 0; i < size; ++i){
    cout << v[i];
  }
  cout << endl;
}

void nextsecond(vector<char>& v){
  int size = int(v.size());

  for (int i = 0; i < size; ++i){
    if (i == 0 and v[i] == '<'){                  // |<
      v[i] = '.';
      v[i+1] = '>';
      ++i;
    } else if (i == size-1 and v[i] == '>'){      // >|
      v[i-1] = '<';
      v[i] = '.';
      ++i;
    } else if (i != size-1 and v[i] == '>' and v[i+1] == '.'){    // >.
      v[i] = '.';
      v[i+1] = '>';
      ++i;
    } else if (i != size-1 and v[i] == '.' and v[i+1] == '<'){    // .<
      v[i] = '<';
      v[i+1] = '.';
      ++i;
    } else if (i != 0 and i != size-1 and v[i] == '>' and v[i+1] == '<'){    // ><
      v[i-1] = '<';
      v[i] = '.';
      v[i+1] = '.';
      v[i+2] = '>';
      i += 2;
    }
  }
}

int main() {

  unsigned long lenght;
  int seconds;

  while (cin >> lenght >> seconds){

    vector<char> v(lenght, '.');

    // Llenar los vectores
    int x;

    int right = 0;
    cin >> right;
    for (int i = 0; i < right; ++i) {
      cin >> x;
      v[x-1] = '>';
    }

    int left = 0;
    cin >> left;
    for (int i = 0; i < left; ++i) {
      cin >> x;
      v[x-1] = '<';
    }

    // Imprimir el vector

    for (int i = 0; i < seconds; ++i){
      printvector(v);
      if(i != seconds-1) nextsecond(v);
    }

    cout << endl;
  }

}