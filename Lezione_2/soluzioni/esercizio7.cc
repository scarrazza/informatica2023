/*
  Esercizio 7: Conversione temperatura 1
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
using namespace std;

int main()
{
  // dichiarazioni
  double T_Celsius;

  // assign values
  cout << "Introdurre valore temperatura in Celsius: ";
  cin >> T_Celsius;
  
  // calcolare kelvin
  double T_Kelvin = T_Celsius + 273.15;
  
  // preparare coutcon 10 cifre significative
  cout.precision(3);
  
  // stampare risultati con fixed
  cout << fixed;
  cout << "T(Celsius) = " << T_Celsius
       << " -> T(Kelvin) = " << T_Kelvin << endl;

  return 0;
}
