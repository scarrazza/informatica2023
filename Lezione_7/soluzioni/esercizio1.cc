/*
  Esercizio: Hello World pointers
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
using namespace std;

int main()
{
  // creazione variabile e puntatore
  double x = 5.5;
  double *p = NULL;

  // punto 2: stampare su terminale
  cout << "x = " << x << endl;
  cout << "&x= " << &x << endl;
  cout << "p = " << p << endl;
  cout << "&p= " << &p << endl;

  // punto 3: assegnare &x a p
  p = &x;
  cout << "p  = " << p << endl;
  cout << "*p = " << *p << endl;

  // punto 4: chiedere un nuovo double
  cout << "Introdurre un double: ";
  cin >> *p;

  // controllare il nuovo valore di x (modificato tramite *p)
  cout << "x = " << x << endl;  

  // creare un array di puntatori n=2
  int n = 10;
  double *v = new double[10];
  for (int i = 0; i < n; i++)
    cout << "&v[" << i << "] = " << &v[i] << endl;
  delete[] v;

  return 0;
}
