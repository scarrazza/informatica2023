/*
  Esercizio: Conversioni temperature.
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
using namespace std;

int main()
{
  // dichiarazioni
  int opzione;
  double T_Celsius;

  // assign values
  cout << "Introdurre valore temperatura in Celsius: ";
  cin >> T_Celsius;

  // calcolare kelvin
  cout << "Premere 1 per conversione a Kelvin." << endl;
  cout << "Premere 2 per conversione a Fahrenheit." << endl;
  cout << "Opzione scelta: ";
  cin >> opzione;

  // preparare coutcon 10 cifre significative
  cout.precision(3);
  cout << fixed;
  
  if (opzione == 1) // Da Celsius a Kelvin
    {
      double T_Kelvin = T_Celsius + 273.15;
      cout << "T(Celsius) = " << T_Celsius << " -> T(Kelvin) = " << T_Kelvin << endl;
    }
  else if (opzione == 2) // Da Celsius a Fahrenheit
    {
      double T_Fahrenheit = T_Celsius * 9.0 / 5.0 + 32.0;
      cout << "T(Celsius) = " << T_Celsius << " -> T(Fahrenheit) = " << T_Fahrenheit << endl;      
    }
  else
    {
      cout << "Opzione non riconosciuta." << endl;
    }

  return 0;
}
