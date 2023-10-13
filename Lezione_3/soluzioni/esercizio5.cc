/*
  Esercizio 5: file input
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
  fstream finput, foutput;

  // prepare input stream
  finput.open("myinput.dat", ios::in);

  // check if file exists
  if (!finput.good())
    {
      cout << "Cannot open myinput.dat" << endl;
      return -1;
    }

  // read from file
  finput >> nome;
  finput >> cognome;
  finput >> matricola;

  // close input file
  finput.close();
  
  cout << cognome << ", " << nome
       << " è registrato con numero matricola "
       << matricola << ".\n";  

  // printing to file
  foutput.open("risultato.dat", ios::out);

  if (!foutput.good())
    {
      cout << "Errore: file is not good!" << endl;
      return -1;
    }

  foutput << cognome << ", " << nome
	  << " è registrato con numero matricola "
	  << matricola << ".\n";  
  
  // close file
  foutput.close();
  
  return 0;
}
