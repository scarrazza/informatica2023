/*
  Esercizio: Scelta telaio bici
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int age;
  double height, weight;
  string size;

  // read input
  cout << "Introdurre età, altezza e peso: ";
  cin >> age >> height >> weight;

  // perform selection
  if (age <= 10)
    {
      size = "XS";
    }
  else if (age > 10 && age <= 18)
    {
      if (height <= 1.1)
	size = "XS";
      else if (height > 1.1 && height <= 1.3 && weight <= 40)
	size = "S";
      else if ((height > 1.1 && height <= 1.3 && weight > 40) ||
	       (height > 1.3 && height <= 1.6) )
	size = "M";      
      else if (height > 1.6)
	size = "L";
      else
	size = "spiacente non disponibile";
    }
  else
    {
      if (height <= 1.4 || weight <= 40)
	size = "XS";
      else if (height > 1.4 && height <= 1.6)
	size = "S";
      else if (height > 1.6 && height <= 1.7)
	size = "M";
      else if (height > 1.7 && height <= 1.9)
	size = "L";
      else if (height > 1.9)
	size = "XL";
      else
	size = "spiacente non disponibile";      
    }

  cout << "Telaio bici suggerito: " << size << endl;
  
  return 0;
}
