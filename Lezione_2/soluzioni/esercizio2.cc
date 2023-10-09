/*
  Esercizio 2: Area and perimeter
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
  base = 5.0;
  altezza = 2.0;

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
