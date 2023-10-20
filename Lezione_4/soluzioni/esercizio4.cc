/*
  Esercizio: Switch
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
using namespace std;

int main()
{
  int matricola;
  cout << "Introdurre numero matricola: ";  
  cin >> matricola;

  switch(matricola)
    {
    case 123456:
      cout << "Sono io" << endl;
      break;

    default:
      cout << "Matricola non trovata" << endl;
    }
  
  return 0;
}
