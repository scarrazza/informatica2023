/*
  Esercizio 1: incremento/decremento
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
using namespace std;

int main()
{
  int numero;
  const int r = 2;

  // leggere il numero di input
  cout << "Introdurre un numero intero: ";
  cin >> numero;
  
  int incremento, decremento, divisione, resto;
  incremento = numero;
  decremento = numero;
  incremento++;  
  decremento--;
  divisione = numero / r;
  resto = numero % r;
  
  cout << "incremento: " << incremento << endl;
  cout << "decremento: " << decremento << endl;
  cout << "divisione : " << divisione << endl;
  cout << "resto     : " << resto << endl;  
  
  return 0;
}
