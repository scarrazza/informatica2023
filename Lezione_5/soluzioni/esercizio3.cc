/*
  Esercizio: Contattore di numeri pari e dispari
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
using namespace std;

int main()
{
  int number;
  int dispari = 0, pari = 0;

  cout << "Introdurre numeri interi: ";
  for(;;)
    {
      cin >> number;
      if (cin.eof()) break;

      if (number % 2 == 0)
	      pari++;
      else
	      dispari++;
    }

  /*
    // Oppure
  cout << "Introdurre numeri interi: ";
  cin >> number;
  while(!cin.eof())
    {
      if (number % 2 == 0)
	pari++;
      else
	dispari++;

      cin >> number;
     }
   */

  cout << endl;
  cout << "Totale numeri pari = " << pari << endl;
  cout << "Totale numeri dispari = " << dispari << endl;

  return 0;
}
