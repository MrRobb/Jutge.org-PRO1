//
// Created by Roberto Ariosa Hernández on 28/12/16.
//

#include <iostream>
#include <vector>

using namespace std;

typedef vector< vector<int> > Matrix;

int main(){
  int rows;
  int columns;
  while (cin >> rows >> columns){
    // Create Matrix
    Matrix m (rows, vector<int> (columns));
    for(int i = 0; i < rows; ++i){
      for(int j = 0; j < columns; ++j){
        cin >> m[i][j];
      }
    }

    // Set the position
    int posx, posy;
    cin >> posx >> posy;
    int aux_comp;

    // TOP-RIGHT
    aux_comp = m[posx][posy];

    int i = posx-1;
    int j = posy+1;
    bool creix = true;
    while(i >= 0 and j < columns and creix){
      if(m[i--][j++] <= aux_comp) creix = false;
      else aux_comp = m[i+1][j-1];
    }

    // TOP-LEFT
    aux_comp = m[posx][posy];
    i = posx-1;
    j = posy-1;
    while(i >= 0 and j >= 0 and creix){
      if(m[i--][j--] <= aux_comp) creix = false;
      else aux_comp = m[i+1][j+1];
    }

    // BOTTOM-RIGHT
    aux_comp = m[posx][posy];
    i = posx+1;
    j = posy+1;
    while(i < rows and j < columns and creix){
      if(m[i++][j++] <= aux_comp) creix = false;
      else aux_comp = m[i-1][j-1];
    }

    // BOTTOM-LEFT
    aux_comp = m[posx][posy];
    i = posx+1;
    j = posy-1;
    while(i < rows and j >= 0 and creix){
      if(m[i++][j--] <= aux_comp) creix = false;
      else aux_comp = m[i-1][j+1];
    }

    // Print
    if(creix) cout << "yes" << endl;
    else cout << "no" << endl;
  }
}