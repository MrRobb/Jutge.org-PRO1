#include <iostream>

using namespace std;

int main() {
  int puntos = 0;
  int numpreg = 6;
  string resp;

  string enunciado1 = "What comes next in the series? 1,4,9,16,25,";
  string respuesta1_1 = "36";
  string respuesta1_2 = "51";
  string correct1 = "36";
  string enunciado2 = "If you unscramble the letters in 'incha' you get the name of a:";
  string respuesta2_1 = "State";
  string respuesta2_2 = "City";
  string respuesta2_3 = "Country";
  string respuesta2_4 = "Animal";
  string correct2 = "State";
  string enunciado3 = "If all boogs are toogs, then all boogs are definately foogs.";
  string respuesta3_1 = "True";
  string respuesta3_2 = "False";
  string correct3 = "False";
  string enunciado4 = "What is half of the square root of 144?";
  string respuesta4_1 = "6";
  string respuesta4_2 = "12";
  string correct4 = "6";
  string enunciado5 = "What is half of one-tenth of one half of 600?";
  string respuesta5_1 = "60";
  string respuesta5_2 = "15";
  string correct5 = "15";
  string enunciado6;
  string respuesta6_1;
  string respuesta6_2;
  string respuesta6_3;
  string respuesta6_4;
  string correct6;

  cout << "Escriu una nova pregunta (sense espais, pots fer servir guions):" << endl;
  cin >> enunciado6;

  cout << endl << "Escriu la resposta (sense espais, pots fer servir guions):" << endl;
  cin >> correct6;

  cout << endl << "Escriu les possibles opcions (mínim = 2 opcions)" << endl;
  cout << "Si no hi ha més respostes, poseu DONE" << endl;
  cin >> respuesta6_1;
  cin >> respuesta6_2;

  if(respuesta6_3 == "DONE"){
    respuesta6_3 = "";
  }

  if (respuesta6_3 != "DONE"){
    cin >> respuesta6_4;

    if(respuesta6_4 == "DONE"){
      respuesta6_4 = "";
    }
  }

  cout << endl << enunciado1 << endl;
  cout << respuesta1_1 << endl;
  cout << respuesta1_2 << endl;

  cin >> resp;

  if (resp == correct1) {
    puntos = puntos + 20;
  } else if (resp != "") {
    puntos = puntos - 10;
  }
  cout << endl << enunciado2 << endl;
  cout << respuesta2_1 << endl;
  cout << respuesta2_2 << endl;
  cout << respuesta2_3 << endl;
  cout << respuesta2_4 << endl;

  cin >> resp;

  if (resp == correct2) {
    puntos = puntos + 20;
  } else if (resp != "") {
    puntos = puntos - 10;
  }

  cout << endl << enunciado3 << endl;
  cout << respuesta3_1 << endl;
  cout << respuesta3_2 << endl;

  cin >> resp;

  if (resp == correct3) {
    puntos = puntos + 20;
  } else if (resp != "") {
    puntos = puntos - 10;
  }

  cout << endl << enunciado4 << endl;
  cout << respuesta4_1 << endl;
  cout << respuesta4_2 << endl;

  cin >> resp;

  if (resp == correct4) {
    puntos = puntos + 20;
  } else if (resp != "") {
    puntos = puntos - 10;
  }

  cout << endl << enunciado5 << endl;
  cout << respuesta5_1 << endl;
  cout << respuesta5_2 << endl;

  cin >> resp;

  if (resp == correct5) {
    puntos = puntos + 20;
  } else if (resp != "") {
    puntos = puntos - 10;
  }

  cout << endl << enunciado6 << endl;
  cout << respuesta6_1 << endl;
  cout << respuesta6_2 << endl;
  cout << respuesta6_3 << endl;
  cout << respuesta6_4 << endl;

  cin >> resp;

  if (resp == correct6) {
    puntos = puntos + 20;
  } else if (resp != "") {
    puntos = puntos - 10;
  }

  cout << "La teva puntuació és de " << puntos << "% ." << endl;

}