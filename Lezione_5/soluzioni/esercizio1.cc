/*
  Esercizio: Hello World for, while e do/while
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
using namespace std;

int main()
{
  // ciclo for
  for (int i = 0; i < 5; i++)
    {
      cout << "Hello World for index = " << i << endl;
    }

  // ciclo while
  int counter = 0;
  while(counter < 5)
    {
      cout << "Hello World while index = " << counter << endl;
      counter++;
    }

  // ciclo do/while
  counter = 0;
  do {
    cout << "Hello World do/while index = " << counter << endl;
    counter++;
  }
  while(counter < 5);
  
  return 0;
}
