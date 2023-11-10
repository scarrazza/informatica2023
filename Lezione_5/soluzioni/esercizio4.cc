/*
  Esercizio: Calcolare media (input da file)
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  // Chiedo quanti numeri dobbiamo leggere
  fstream f;
  f.open("../data.dat", ios::in);

  if (!f.good())
    {
      cout << "Problemi con il file data.dat" << endl;
      return -1;
    }
      
  // Chiedo i numeri e salvo la somma
  double num;
  double sum = 0.0, n = 0.0;  
  for (;;)
    {
      f >> num;
      if (f.eof()) break;
      sum += num;
      n++;
    }
  f.close();

  // calcolo la media
  cout << "La media è " << sum / n << endl;
  
  return 0;
}
