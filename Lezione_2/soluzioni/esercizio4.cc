/*
  Esercizio 4: Versione corretta
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
#include <cmath>
using namespace std;      // using namespace std -> ; mancante
 
int main()
{
  const double angolo = 9;
  const int a = 2, b = 3;
  int somma = 0;          // somma non puo essere costante
 
  somma = a + b;          // mancato ; e spazi tra le variabili
 
  cout << "sin(9) = " << sin(angolo) << endl; // mancato spazio tra <<sin
  cout << "somma = " << somma << "\n";
 
  return 0; // mancata indentazione e troppi spazi tra return e 0
}
