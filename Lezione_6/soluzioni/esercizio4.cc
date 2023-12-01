/*
  Esercizio: Massa del Higgs
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  // creazione variabile per le masse;
  const int n = 10000;
  double mass[n];

  // apertura file dati
  fstream f;
  f.open("../data_higgs.dat", ios::in);

  if (!f.good())
    {
      cerr << "Errore lettura file data_higgs.dat" << endl;
      return 1;
    }

  // lettura dati
  for (int i = 0; i < n; i++)
    f >> mass[i];

  f.close();

  // ordinare vettore in modo crescente, selection sort O(n^2)
  for (int i = 0; i < n-1; i++)
    for (int j = i+1; j < n; j++)
      if (mass[i] > mass[j])
      {
        double tmp = mass[i];
        mass[i] = mass[j];
        mass[j] = tmp;
      }

  // stampare minimo e massimo
  const double massmin = mass[0];
  const double massmax = mass[sizeof(mass)/sizeof(*mass)-1]; // oppure mass[9999];
  cout << "Massa minima  = " << massmin << " GeV." << endl;
  cout << "Massa massima = " << massmax << " GeV." << endl;

  // costruire binning e istogramma frequenze
  int nbins = int((massmax - massmin) / 5) + 1;
  double *bins = new double[nbins];
  int *freq = new int[nbins];

  // inizializzare/riempire bins
  for (int i = 0; i < nbins; i++)
    {
      bins[i] = mass[0] + i*5.0; // binning con lower-edges
      freq[i] = 0;
    }

  // istogrammare
  for (int i = 0; i < n; i++)
    for (int b = 0; b < nbins-1; b++)
      if (mass[i] <= bins[b+1]) // prendo l'upper-edge del bin come soglia
	{
	  freq[b]++;
	  break;
	}

  // stampare l'istogramma
  cout << endl;
  cout << "Istogramma:" << endl;
  for (int b = 0; b < nbins; b++)
    cout << "M = " << bins[b] << " GeV -> " << freq[b] << endl;

  // determinare indice in cui freq è massima
  int fmax = 0;
  int freqmax = freq[0];

  for (int i = 0; i < nbins; i++)
    if (freq[i] > freqmax)
      {
        fmax = i;
        freqmax = freq[i];
      }

  // stampare risultato
  cout << endl;
  cout << "Valore del bin più frequente M = " << bins[fmax]
       << " GeV con freq = " << freq[fmax] << endl;

  delete[] bins;
  delete[] freq;

  return 0;
}
