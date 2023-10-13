/*
  Esercizio 4: file output
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  // variabili
  char nome[20];
  string cognome;
  int matricola;
  fstream foutput;
  
  // printing to screen
  cout << "Introdurre nome: ";
  cin >> nome;

  cout << "Introdurre cognome: ";
  cin >> cognome;

  cout << "Introdurre numero matricola: ";
  cin >> matricola;

  cout << cognome << ", " << nome
       << " è registrato con numero matricola "
       << matricola << ".\n";  

  // printing to file
  foutput.open("risultato.dat", ios::out);

  if (foutput.good())
    {
      foutput << cognome << ", " << nome
	      << " è registrato con numero matricola "
	      << matricola << ".\n";  
    }
  else
    cout << "Errore: file is not good!" << endl;

  // close file
  foutput.close();
  
  return 0;
}
