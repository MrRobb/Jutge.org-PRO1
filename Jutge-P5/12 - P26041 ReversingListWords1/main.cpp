#include <iostream>

using namespace std;

void print_name(string name){
  if (cin >> name){
    print_name(name);
    cout << name << endl;
  }
}

int main() {

  string name = "hello";
  print_name(name);

}