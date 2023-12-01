/*
  Esercizio: Moto rettilineo
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

#define N 1000

int main()
{
  // creazione variabile per la velocita;
  double v[N];
  double spazio, tempo;

  // apertura file dati
  fstream f;
  f.open("../data_moto.dat", ios::in);

  if (!f.good())
    {
      cerr << "Errore lettura file data_moto.dat" << endl;
      return 1;
    }

  // lettura dati
  for (int i = 0; i < N; i++)
    {
      f >> spazio >> tempo;
      v[i] = spazio / tempo;
    }
  
  f.close();

  // Calcolo velocità media
  double sum = 0;
  for (int i = 0; i < N; i++)
    sum += v[i];

  double vmedia = sum / N;
  cout << "Velocità media = " << vmedia << endl;

  // Calcolo dev.std di v
  double sum2 = 0;
  for (int i = 0; i < N; i++)
    sum2 += pow(v[i] - vmedia, 2);

  double sigma = sqrt(sum2/(N-1));
  cout << "Dev. standard = " << sigma << endl;

  // calcolo la velocità minima
  double vmin = v[0];
  for (int i = 1; i < N; i++)
    if (v[i] < vmin)
      vmin = v[i];

  cout << "Velocità minima = " << vmin << endl;

  // calcolo la velocità massima
  double vmax = v[0];
  for (int i = 1; i < N; i++)
    if (v[i] > vmax)
      vmax = v[i];

  cout << "Velocità massima = " << vmax << endl;
  
  return 0;
}
