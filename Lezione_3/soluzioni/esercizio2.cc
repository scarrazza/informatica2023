/*
  Esercizio 2: numeri pari e dispari
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
using namespace std;

int main()
{
  // variabili  
  int numero;
  cout << "Introdurre numero intero: ";
  cin >> numero;

  cout << "Il numero " << numero << " è "; 
  if (numero % 2 == 0)
    cout << "pari." << endl;
  else
    cout << "dispari." << endl;
  
  return 0;
}
