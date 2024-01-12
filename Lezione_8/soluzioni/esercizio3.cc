/*
  Esercizio: Hello World struct
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
using namespace std;

// dichiarazione della structtura
struct vettore {
  double x;
  double y;
  double z;
};

//__________________________________
double scalar(vettore a, vettore b)
{
  return a.x * b.x + a.y * b.y + a.z * b.z;
}

//__________________________________
vettore somma(vettore a, vettore b)
{
  vettore c;
  c.x = a.x + b.x;
  c.y = a.y + b.y;
  c.z = a.z + b.z;
  return c;
}

//__________________________________
int main()
{
  vettore a, b;
  a.x = -1;
  a.y = 2;
  a.z = -3;

  b.x = a.x;
  b.y = a.y;
  b.z = a.z;

  cout << "Prodotto scalare: " << scalar(a, b) << endl;

  vettore c = somma(a, b);
  cout << "Vettore somma: (" << c.x << "," << c.y << "," << c.z << ")" << endl;

  return 0;
}
