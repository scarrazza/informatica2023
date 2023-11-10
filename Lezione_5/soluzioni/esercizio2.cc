/*
  Esercizio: Calcolare media (input da terminale)
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
using namespace std;

int main()
{
  // Chiedo quanti numeri dobbiamo leggere
  int n;
  cout << "Quanti numeri vuoi introdurre? " << endl;  
  cin >> n;

  // Chiedo i numeri e salvo la somma
  double num;
  double sum = 0.0;
  for (int i = 0; i < n; i++)
    {
      cout << "Introdurre numero: ";
      cin >> num;
      sum = sum + num;
    }

  // calcolo la media
  cout << "La media è " << sum / n << endl;
  
  return 0;
}
