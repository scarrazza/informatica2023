/*
  Esercizio: Hello World arrays
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
using namespace std;

int main()
{
  // creazione variabili
  const int n = 5;
  double v[n] = {2, 5, 10, 20, 50};
  double w[n] = {10, -5, 3, 1, 100};  
  
  // stampare valori di v 
  for (int i = 0; i < n; i++)
    cout << "v[" << i << "] = " << v[i] << endl;

  // stampare valori di w
  for (int i = 0; i < n; i++)
    cout << "w[" << i << "] = " << w[i] << endl;

  // creare array s
  double s[n];

  // inizializzare s con i valori di v
  for (int i = 0; i < n; i++)
    s[i] = v[i];

  // sommare valori di w
  for (int i = 0; i < n; i++)
    s[i] += w[i];

  // stampare s
  cout << "Risultato v+w:" << endl;
  for (int i = 0; i < n; i++)
    cout << "s[" << i << "] = " << s[i] << endl;
  
  return 0;
}
