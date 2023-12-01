/*
  Esercizio: Prodotto scalare
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  // creazione variabili
  const int n = 5;
  double *v = new double[n];
  v[0] = 2;
  v[1] = 5;
  v[2] = 10;
  v[3] = 20;
  v[4] = 50;

  double *w = new double[n];
  w[0] = 10;
  w[1] = -5;
  w[2] = 3;
  w[3] = 1;
  w[4] = 100;

  // calcolo prodotto scalare
  double s = 0;
  for (int i = 0; i < n; i++)
    s += v[i] * w[i];
  cout << "Prodotto scalare v*w = " << s << endl;

  double *z = new double[n];
  for (int i = 0; i < n; i++)
    {
      if (i == 2)
	      z[i] = 0;
      else
	      z[i] = v[i];
    }

  // calcolo la normalizzazione di z
  double norm = 0;
  for (int i = 0; i < n; i++)
    norm += z[i] * z[i];
  norm = sqrt(norm);
  cout << "Norma di z = " << norm << endl;

  // normalizzare e stampare z
  for (int i = 0; i < n; i++)
    {
      z[i] /= norm;
      cout << "z[" << i << "] = " << z[i] << endl;
    }

  delete[] v;
  delete[] w;
  delete[] z;

  return 0;
}
