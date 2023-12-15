/*
  Esercizio: Discriminatore di punti
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
#include <cmath>
using namespace std;

/**
 * Calcola la distanza di Pitagora tra punti (x,y) e (xc, yc).
 */
double distanza(const double x, const double y,
		const double xc, const double yc)
{
  return sqrt(pow(x-xc, 2) + pow(y-yc, 2));
}

/**
 * Verifica se un punto (x,y) si trova dentro il cerchio.
 */
void check_circle(const double x, const double y,
		  const double xc, const double yc,
		  const double r, bool &status)
{
  const double d = distanza(x, y, xc, yc);
  if (d <= r)
    status = true;
  else
    status = false;
}

int main()
{
  const double xc = 1, yc = 1, r = 1;
  double x, y;
  bool status;

  for(;;)
    {
      cout << "\nIntrodurre coordinate (x,y): " << endl;
      cin >> x >> y;
      if (cin.eof()) break;

      check_circle(x, y, xc, yc, r, status);
      if (status)
	      cout << "Il punto è dentro il cerchio." << endl;
      else
	      cout << "Il punto non è dentro il cerchio." << endl;
    }

  return 0;
}
