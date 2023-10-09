/*
  Esercizio 6: Notazione per cout
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

  // preparare coutcon 10 cifre significative
  cout.precision(10);
  
  // stampare risultati con fixed
  cout << fixed;
  cout << "Area = " << area << "\tPerimetro = " << perimetro << endl;

  // stampare risultati con scientific
  cout << scientific;
  cout << "Area = " << area << "\tPerimetro = " << perimetro << endl;

  return 0;
}
