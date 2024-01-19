#include <iostream>
#include <fstream>
#include "funzioni3.h"
using namespace std;

int main()
{
  // dichiarazioni variabili
  fstream f;
  f.open("../data3.dat", ios::in);

  if (!f.good())
  {
    cout << "Errore lettura file." << endl;
    return 1;
  }

  int N = 1000;
  point2d *p = new point2d[N];
  for (int i = 0; i < N; i++)
    f >> p[i].x >> p[i].y;

  f.close();

  // create output files
  fstream g1, g2;
  g1.open("dentro.dat", ios::out);
  g2.open("fuori.dat", ios::out);

  if (!g1.good() || !g2.good())
  {
    cout << "Errore lettura file." << endl;
    return 1;
  }

  for (int i = 0; i < N; i++)
  {
    if (distance(p[i]) < 0.5)
    {
      g1 << p[i].x << " " << p[i].y << endl;
    }
    else
    {
      g2 << p[i].x << " " << p[i].y << endl;
    }
  }

  g1.close();
  g2.close();

  // free memory
  delete[] p;

  return 0;
}
