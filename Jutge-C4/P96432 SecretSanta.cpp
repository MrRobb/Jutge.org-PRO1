//
// Created by Roberto Ariosa Hernández on 29/12/16.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Gift {
  string from;
  string to;
  int n;
};

struct People {
  string name;
  int money;
};

bool compfrom(Gift a, Gift b){
  return a.from < b.from;
}

bool compto(Gift a, Gift b){
  return a.to < b.to;
}

bool compmoney (People a, People b){
  if(a.money < b.money) return true;
  else return (a.money == b.money and a.name < b.name);
}

int main(){
  int cases;
  cin >> cases;
  for(int i = 0; i < cases; ++i){

    // Create the vector of cases
    int friends;
    cin >> friends;
    vector<Gift> allgifts(friends);
    for(int j = 0; j < friends; ++j){
      cin >> allgifts[j].from;
      cin >> allgifts[j].to;
      cin >> allgifts[j].n;
    }

    // Create wallet
    vector<People> wallet(friends);

    // Sort and assign
    sort(allgifts.begin(),allgifts.end(),compfrom);
    for(int j = 0; j < friends; ++j){
      wallet[j].name = allgifts[j].from;
      wallet[j].money = -allgifts[j].n;
    }

    sort(allgifts.begin(),allgifts.end(),compto);
    for(int j = 0; j < friends; ++j) wallet[j].money += allgifts[j].n;

    // Print sorted
    sort(wallet.begin(),wallet.end(),compmoney);
    for(int j = 0; j < friends; ++j){
      cout << wallet[j].name << ' ' << wallet[j].money << endl;
    }

    cout << endl;
  }
}