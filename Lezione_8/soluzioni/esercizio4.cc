/*
  Esercizio: Headers e sorgente
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
#include "funzioni.h"
using namespace std;

int main()
{
  double a = 5, b = 2;

  cout << "Valori iniziali:" << endl;
  cout << a << " " << b << endl;

  cout << "Primo scambio con scambia1:" << endl;
  scambia1(a,b);
  cout << a << " " << b << endl;

  cout << "Secondo scambio con scambia2:" << endl;
  scambia2(&a, &b);
  cout << a << " " << b << endl;
  
  return 0;
}
