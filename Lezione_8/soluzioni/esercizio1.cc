/*
  Esercizio: Hello World struct
  Author: Stefano Carrazza - 2018
*/
#include <iostream>
#include <string>
using namespace std;

// dichiarazione della structtura
struct prodotto {
  int peso;
  double prezzo;
  string nome;
};

//__________________________________
void stampa_prodotto(prodotto p);

//__________________________________
int main()
{
  prodotto banana;
  banana.nome = "banana";
  banana.peso = 200;
  banana.prezzo = 2.5;

  stampa_prodotto(banana);

  return 0;
}

//__________________________________
void stampa_prodotto(prodotto p)
{
  cout << "Prodotto" << endl;
  cout << "  - nome: " << p.nome << endl;
  cout << "  - peso: " << p.peso << endl;
  cout << "  - prezzo: " << p.prezzo << endl;
}
