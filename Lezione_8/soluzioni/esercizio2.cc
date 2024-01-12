/*
  Esercizio: Hello World struct
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
using namespace std;

// dichiarazione della structtura
struct prodotto {
  int peso;
  double prezzo;
  string nome;
};

//__________________________________
void fattura(prodotto *p, int size);

//__________________________________
int main()
{
  const int n = 4;
  prodotto *p = new prodotto[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Introdurre prodotto " << i << endl;
    cout << "Nome: ";
    cin >> p[i].nome;
    cout << "Peso: ";
    cin >> p[i].peso;
    cout << "Prezzo: ";
    cin >> p[i].prezzo;
    cout << endl;
  }

  fattura(p, n);

  delete[] p;

  return 0;
}

//__________________________________
void fattura(prodotto *p, int size)
{
  cout << "Fattura" << endl;
  cout << "----------------------" << endl;
  cout << "Nome\tPeso\tPrezzo" << endl;
  double totale = 0;
  for (int i = 0; i < size; i++)
  {
    cout << p[i].nome << "\t" << p[i].peso << "\t" << p[i].prezzo << endl;
    totale += p[i].prezzo;
  }
  cout << "----------------------" << endl;
  cout << "Totale (euro): " << totale << endl;
  cout << "----------------------" << endl;
}
