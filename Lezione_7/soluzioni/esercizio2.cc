/*
  Esercizio: Hello world funzioni
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
using namespace std;

/**
 * Stampa contenuto array.
 */
void print_array(const int a[], int n)
{
  cout << "Contenuto array:" << endl;
  for (int i = 0; i < n; i++)
    cout << "index = " << i << ", value = " << a[i] << endl;
}

/**
 * Calcola massimo valore in un array.
 */
int max_array(const int a[], int n)
{
  double max = a[0];
  for (int i = 1; i < n; i++)
    if (a[i] > max)
      max = a[i];
  return max;
}

/**
 * Calcola minimo valore in un array.
 */
int min_array(const int a[], int n)
{
  double min = a[0];
  for (int i = 1; i < n; i++)
    if (a[i] < min)
      min = a[i];
  return min;
}

/**
 * Calcola minimo e massimo valore in un array.
 */
void min_max_array(const int a[], int n, int &min, int &max)
{
  max = max_array(a, n);
  min = min_array(a, n);
}

/**
 * Ordina un array in modo crescente.
 */
void sort_array(int a[], int n)
{
  for (int i = 0; i < n-1; i++)
    for (int j = i+1; j < n; j++)
      if (a[i] > a[j])
      {
        const int dep = a[i];
        a[i] = a[j];
        a[j] = dep;
      }
}

int main()
{
  // creazione variabili
  const int n = 10;
  int v[n] = {9, 2, 1, 3, 4, 7, 0, 11, 20, 5};

  // stampare v
  print_array(v, n);

  // maximum/minimum array
  cout << "max = " << max_array(v, n) << endl;
  cout << "min = " << min_array(v, n) << endl;

  // using min_max_array
  int min, max;
  min_max_array(v, n, min, max);
  cout << "min = " << min << ", max = " << max << endl;

  // ordinare
  sort_array(v, n);
  print_array(v, n);

  return 0;
}
