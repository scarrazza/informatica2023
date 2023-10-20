/*
  Esercizio: Equazione quadratica.
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  // dichiarazioni
  double a, b, c;

  // assign values
  cout << "Introdurre i coeffcienti a b c (separati da spazio):\n";
  cin >> a >> b >> c;

  cout << "Soluzione per " << a << "*x^2 + " << b << "*x + " << c << " = 0.\n";
  
  // calcolare discriminante
  const double D = pow(b, 2) - 4 * a * c;

  if (D > 0)
    {
      const double x1 = (-b + sqrt(D)) / (2 * a);
      const double x2 = (-b - sqrt(D)) / (2 * a);
      cout << "Soluzione x1 = " << x1 << endl;
      cout << "Soluzione x2 = " << x2 << endl;      
    }
  else if (D == 0)
    {
      const double x12 = -b / (2 * a);
      cout << "Soluzione x1,2 = " << x12 << endl;
    }
  else // D < 0
    {
      const double real = -b / (2 * a);
      const double imag1 = sqrt(-D) / (2 * a);
      const double imag2 = -imag1;
      cout << "Soluzione x1 = " << real << " + i * " << imag1 << endl;
      cout << "Soluzione x2 = " << real << " + i * " << imag2 << endl;
    }
    
  return 0;
}
