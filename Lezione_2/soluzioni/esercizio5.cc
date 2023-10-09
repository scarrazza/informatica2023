/*
  Esercizio 5: Input/Output
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
using namespace std;

int main()
{
  // dichiarazioni
  double base, altezza;
  double area, perimetro;

  // assign values
  cout << "Introdurre valore base: ";
  cin >> base;
  cout << "Introdurre valore altezza: ";
  cin >> altezza;
  cout << "Rettangolo base = " << base
       << ", altezza = " << altezza << endl;
  
  // calcolare area
  area = base * altezza;

  // calcolare perimetro
  perimetro = 2 * (base + altezza);

  // stampare risultati
  cout << "Base = " << base << endl;
  cout << "Altezza = " << altezza << endl;
  cout << "Area rettangolo = " << area << endl;
  cout << "Perimetro rettangolo = " << perimetro << endl;

  return 0;
}
