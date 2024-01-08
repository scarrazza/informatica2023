# Laboratorio di informatica 8
### Prof. Stefano Carrazza - Corso C

**Riassunto:** Esercizi di base in C++: strutture dati, funzioni, headers e sorgenti.

Prima di iniziare suggeriamo di create una cartella per questa lezione in cui potete salvare tutti i files che saranno creati per gli esercizi.
```bash
cd ~/           # ci porta alla home directory
mkdir lezione8  # crea la directory sulla vostra home
cd lezione8     # entrate dentro la cartella
```
dopodiché creare un `makefile` con le istruzioni di compilazione per tutti gli esercizi.

## Esercizio 1 - Hello World struct 1

Scrivere un programma in C++ in cui:

1. Definiamo la struttura seguente:
    ```c++
    struct prodotto {
      int peso;
      double prezzo;
      string nome;
    };
    ```
2. Dentro il main inizializziamo un `prodotto` con `nome` "banana", `peso` di 200g
   e `prezzo` di 2.5 euro.
3. Scriviamo una funzione `void stampa_prodotto` che prende per argomento `prodotto` e stampa:
    ```
    Prodotto:
      - nome: *stampare nome*
      - peso: *stampare peso*
      - prezzo: *stampare prezzo*
    ```

## Esercizio 2 - Hello World struct 2

Scrivere un programma in C++ in cui:

1. Definiamo la struttura `prodotto` presentata sopra.
2. Inizializziamo un array dinamico di `prodotto` con dimensione massima di 4 elementi.
3. Chiediamo all'utente di introdurre dei prodotti fino un massimo di 4 elementi. L'utente dovrà specificare il nome del prodotto, il suo peso e prezzo.
4. Implementare una funzione `void fattura(prodotto *p, int size);` che prende come argomento l'array dinamico inizializzato dall'utente e stampa la tabella seguente:
    ```
    Fattura
    --------------------------------
    Nome           Peso     Prezzo
    --------------------------------
    *prodotto 1*  *peso1*  *prezzo1*
    *prodotto 2*  *peso1*  *prezzo2*
    *prodotto 3*  *peso1*  *prezzo3*
    *prodotto 4*  *peso1*  *prezzo4*
    --------------------------------
    Totale (euro): *prezzo totale*
    --------------------------------
    ```
5. Verificare che il programma funzioni correttamente.

## Esercizio 3 - Vettori

Scrivere un programma in C++ in cui dei vettori 3D vengono salvati in una struttura dati:
```c++
struct vettore {
  double x;
  double y;
  double z;
};
```

1. Scrivere la funzione `main` e dichiarare 2 variabili di tipo `vettore` chiamate `a` e `b` rispettivamente.

3. Assegnare ad `a` il vettore (-1, 2, -3).

4. Assegnare a `b` il valore di `a`.

5. Implementare una funzione `scalar` di tipo `double` che calcola il prodotto scalare tra 2 oggeti di tipo `vettore`. Testare tale funzione direttamente sul main passando `a` e `b` come argomenti e stampando il risultato su terminale.

8. Implementare una funzione `somma` di tipo `vettore` che prende come argomenti 2 oggetti `vettore` e ritorna un nuovo oggetto `vettore` in cui le coordinate corrispondono somma delle coordinate degli argomenti. Stampare le coordinate del nuovo vettore su terminale.

## Esercizio 4 - Headers e sorgente

Scrivere un programma in C++ in cui viene utilizzato un file header.

1. Creare un file header intitolato `funzioni.h` e dichiarare una funzione `scambia1` di tipo `void` che prende come argomenti i riferimenti a 2 numeri di tipo `double`.

2. Sempre sullo stesso header, dichiarare un'ulteriore funzione chiamata `scambia2` di tipo `void` che prende i puntatori di 2 numeri di tipo `double`.

3. Creare un file `funzioni.cc` in cui viene implementato un algoritmo di scambio tra le variabili di tipo `double` per le funzioni `scambia1` e `scambia2`.

4. Creare un file `main.cc`, includere il header `funzioni.h` e testare le funzioni `scambia1` e `scambia2`.

5. Aggiustare sul `makefile` il commando di compilazione tenendo conto di tutti i files `*.cc`.
