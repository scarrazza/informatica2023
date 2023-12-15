/*
  Esercizio: Prodotto scalare, norma, matrice trasposta
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
#include <cmath>
using namespace std;

double scalar(const double a[], const double b[], int n);
double norm(const double a[], int n);
void scambia(double &a, double &b);

int main()
{
  // variabili
  const int n = 5;
  const double v[n] = {1,2,3,4,5};
  const double w[n] = {10,2,4,3,2};
  double M[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

  // calcola prodotto scalare
  cout << scalar(v, w, n) << endl;

  // calcola la norma
  cout << norm(v, n) << endl;

  // calcola matrice trasposta
  for (int i = 0; i < 3; i++)
    for (int j = i; j < 3; j++)
      scambia(M[i][j], M[j][i]);

  // stampa M.T
  for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
	      cout << M[i][j] << " ";
      cout << endl;
    }

  return 0;
}

/**
 * Scalar product.
 */
double scalar(const double a[], const double b[], int n)
{
  double s = 0;
  for (int i = 0; i < n; i++)
    s += a[i] * b[i];
  return s;
}

/**
 * Calcola norma dell'array.
 */
double norm(const double a[], int n)
{
  double s = scalar(a, a, n);
  return sqrt(s);
}

/**
 * Scambia a con b.
 */
void scambia(double &a, double &b)
{
  const double dep = a;
  a = b;
  b = dep;
}
