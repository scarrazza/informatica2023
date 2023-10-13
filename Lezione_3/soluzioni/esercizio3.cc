/*
  Esercizio 3: string and char
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
  // variabili
  char nome[20];
  string cognome;
  int matricola;
  
  // printing to screen
  cout << "Nome     : ";
  cin >> nome;

  cout << "Cognome  : ";
  cin >> cognome;

  cout << "Matricola: ";
  cin >> matricola;

  cout << cognome << ", " << nome
       << " è registrato con numero matricola "
       << matricola << ".\n";

  return 0;
}
