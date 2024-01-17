# Laboratorio di informatica 9
### Prof. Stefano Carrazza - Corso C

**Riassunto:** Esercizi di base in C++: caricamento dati.

Prima di iniziare suggeriamo di create una cartella per questa lezione in cui potete salvare tutti i files che saranno creati per gli esercizi.
```bash
cd ~/           # ci porta alla home directory
mkdir lezione9  # crea la directory sulla vostra home
cd lezione9     # entrate dentro la cartella
```
dopodiché creare un `makefile` con le istruzioni di compilazione per tutti gli esercizi.

## Esercizio 1 - Data loading, funzioni e struct

Consideriamo un file di dati in cui vengono salvate le coordinate cartesiane (x,y) di particelle cariche sotto un campo magnetico con sorgente centrata in origine.

1. Definire una `struct point2d` in cui vengono salvati un puntatore `double *coordinate;` e una variabile `distance` di tipo `double` in file header `funzioni.h`.

2. Scaricare il file che contiene le coordinate `(x,y)` per ogni particella con:
    ```bash
    wget https://raw.githubusercontent.com/scarrazza/informatica2023/master/Lezione_9/data1.dat
    # oppure (se macos)
    curl https://raw.githubusercontent.com/scarrazza/informatica2023/master/Lezione_9/data1.dat -o data1.dat
    ```

3. Implementare un array di struct `point2d` chiamato `punti` di dimensione 1000 (*hint:* su stack), implementare un ciclo in cui ogni per ogni elemento `point2d` il puntatore `coordinate` viene inizializzato come un array dinamico di dimensione 2, in cui il primo valore corrisponde alla `x` e il secondo all'`y` letti da file.

4. Scrivere una funzione `compute_distance` di tipo `void` che prende come argomento 1 `point2d` e calcola la distanza rispetto alla sorgente usando il teorema di Pitagora. Definire questa funzione sul header `funzioni.h` e l'implementazione su un file sorgente `funzioni.cc`.

5. Calcolare la `distanza` media per tutti gli elementi dell'array `punti` tramite una funzione `mean` di tipo `double` che prende come argomento l'array `punti` e la sua dimensione.

6. Ricordarsi di pulire la memoria con attenzione.

## Esercizio 2 - Generazione dati su file

Scrivere un programma in C++ in cui:

1. Definite una funzione di tipo `double` che restituisce la formula `f(x) = -sin(x*x)/x + 0.01 * x*x`, dove `x` è l'argomento della funzione.

2. Sul main costruire un array `x` di 100 elementi distanziati linearmente tra [-3, 3].

3. Stampare su file `output.dat` riga per riga le coppie `x` e `f(x)`.


## Esercizio 3 - Data filtering

Scrivere un **programma in C++** in cui dei punti letti da file vengono classificati in 2 categorie, dentro e fuori da un cerchio centrato nel piano `(x,y) = (0.5, 0.5)` e raggio `r = 0.5`. Programmare applicando la distinzione tra header e sorgenti.

1. Definire una struttura dati per punti sul piano `(x,y)`. Scaricare il file di dati con le coordinate `(x,y)` di 1000 punti con:
    ```
    wget https://raw.githubusercontent.com/scarrazza/informatica2023/master/Lezione_10/data3.dat
    # oppure
    curl https://raw.githubusercontent.com/scarrazza/informatica2023/master/Lezione_10/data3.dat -o data3.dat
    ```

2. Caricare i dati da file in un array dinamico della struttura definita al punto 1.

3. Per ogni elemento dell'array di punti determinare se si trova dentro o fuori del cerchio e stampare le coordinate `(x,y)` in 2 file distinti, rispettivamente `dentro.dat` e `fuori.dat`. *(**Suggerimento**: costruire una funzione che calcola la distanza tra il punto e il centro del cerchio in modo che il codice di filtraggio sia breve.)*

## Esercizio 4 - Data generator

Il file `/home/comune/20190718/data.dat`, presente sulla macchina `tolab.fisica.unimi.it`, contiene riga per riga la descrizione di un numero imprecisato di misure temporali di un oggetto in movimento sullo spazio tridimensionale effettuate in laboratorio. La prima colonna del file determina l'istante *t*, del vettore velocità *(vx, vy, vz)* sullo spazio tridimensionale, mentre l'ultima colonna contiene l'energia cinetica totale dell'oggetto all'istante *t*. Dunque, ogni rida del file `data.dat` contiene 1 dato di tipo `int` e 4 dati di tipo `double`.

Definita la struttura:
```c++
struct misure {
    int t;          // istante della misura
    double vx;      // coordinata vx dell'oggetto
    double vy;      // coordinata vx dell'oggetto
    double vz;      // coordinata vz dell'oggetto
    double K;       // energia cinetica totale dell'oggetto
    double massa;   // massa dell'oggetto in moto
};
```

Svolgere i seguenti punti con un programma in C++, usando la distinzione header/sorgente e makefile assieme ad un script di plotting:

1. Caricare tutte le misure descritte nel file `data.dat` in un array di misure allocato dinamicamente. Il
campo `massa` verrà riempito in seguito, inizializzarlo a zero durante il caricamento da file. Stampare
a video: (i) il numero di misure lette e (ii) la descrizione completa di ogni misura. *(**Hint**: scrivere funzioni per caricare l'array da file e per stampare la descrizione completa di ogni misura.)*

2. (i) Scrivere una funzione che calcola la massa per ogni instante *t* sapendo che l'energia cinetica è
    ```
    K = 1/2 * m * (vx^2 + vy^2 + vz^2),
    ```
    (ii) Assegnare a ciascuna misura la propria massa, cioè: assegnare al campo `massa` di misure.
    (iii) Stampare a video la descrizione aggiornata delle misure. *(**Hint**: usare la funzione del punto 1.)*
