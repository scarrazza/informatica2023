/*
  Esercizio: Successione di Fibonacci
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
using namespace std;

int main()
{
  // variabili
  int n, elemento;
  int primo = 0, secondo = 1;

  // determino il numero di elementi della successione
  cout << "Introdurre numero di elementi della successione di Fibonacci: ";
  cin  >> n;

  // Calcolo gli elementi
  cout << "Primi " << n << " elementi della succesione di Fibonacci:" << endl;
  for (int i = 0; i < n; i++)
    {
      if (i <= 1)
	      elemento = i;
      else
      {
        elemento = primo + secondo;
        primo = secondo;
        secondo = elemento;
      }
      cout << elemento <<  endl;
    }

  return 0;
}
