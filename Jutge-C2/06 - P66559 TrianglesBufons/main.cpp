#include <iostream>
using namespace std;

void escriu_triangle(int t){

  int aux = 1;

  for(int i=t*2; i>0; i--){

    for(int j=0; j<i-1; j++)cout<<' ';

    if(i%2==0){

      for(int m=0; m<aux; m++){

        cout<<"/\\";
        if(aux>1 and m+1<aux)cout<<"  ";
      }
      cout<<endl;
    }
    else{

      for(int m=0; m<aux; m++)cout<<"/__\\";
      cout<<endl;
      aux++;
    }
  }
}

int main(){

  int t;
  while(cin>>t and t>0){

    escriu_triangle(t);
    cout<<endl;
  }
}