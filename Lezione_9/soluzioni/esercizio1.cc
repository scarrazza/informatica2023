#include <iostream>
#include <fstream>
#include "funzioni1.h"
using namespace std;


int main()
{
  const int n = 1000;
  point2d punti[n];

  fstream f;
  f.open("../data1.dat", ios::in);

  if (!f.good())
    {
      cerr << "Errore apertura file data.dat" << endl;
      return -1;
    }

  // loading da file
  for (int k = 0; k < n; k++)
    {
      punti[k].coordinate = new double[2];
      f >> punti[k].coordinate[0] >> punti[k].coordinate[1];

      // calcolo distanza
      compute_distance(punti[k]);
    }

  f.close();

  cout << "media = " << mean(punti, n) << endl;

  // pulire memoria
  for (int k = 0; k < n; k++)
    delete[] punti[k].coordinate;

  return 0;
}
