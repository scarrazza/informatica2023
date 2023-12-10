# Laboratorio di informatica 6
### Prof. Stefano Carrazza - Corso C

**Riassunto:** Esercizi di base in C++: arrays.

Prima di iniziare suggeriamo di create una cartella per questa lezione in cui potete salvare tutti i files che saranno creati per gli esercizi.
```bash
cd ~/           # ci porta alla home directory
mkdir lezione6  # crea la directory sulla vostra home
cd lezione6     # entrate dentro la cartella
```
dopodiché creare un `makefile` con le istruzioni di compilazione per tutti gli esercizi.

## Esercizio 1 - Hello World arrays

Scrivere un programma in C++ in cui vengono utilizzati arrays.

1. Costruire i seguenti vettori di tipo double usando stack arrays:

    <img src="images/ex1.png" width="250">

2. Stampare su terminale i valori di `v` e `w`, seguendo il formato:
    ```
      v[0] = <valore>
      v[1] = <valore>
      ...
      w[0] = <valore>
      w[1] = <valore>
      ...
    ```

3. Creare un array `double s[5]` e inizializzare `s` con i valori di `v`.

4. Sommare i valori di `w` in `s`.

5. Stampare `s` su schermo, seguendo il formato al punto 2.

## Esercizio 2 - Prodotto scalare

Scrivere un programma in C++ che calcola il prodotto scalare tra array dinamici.

1. Costruire i vettori `v` e `w` precedenti usando array dinamici. Ricordarsi di allocare array dinamici con l'operatore `new` e eliminarli alla fine del programma/scope con l'operatore `delete`.

2. Implementare il prodotto scalare tra `v` e `w` e stampare il risultato.

3. Creare un vettore `z` uguale a `v` (stessa dimensione e copia dei contenuti) con `z[2] = 0`.

4. Calcolare la normalizzazione di `z`.

5. Normalizzare `z` e stampare i suoi valori su terminale.


## Esercizio 3 - Moto rettilineo

Scrivere un programma in C++ che legga da file lo spazio e tempo di una particella carica in movimento rettilineo, calcola la velocità istantanea per ogni misura e determina la velocità media, la sua deviazione standard, il suo valore minimo e massimo.

1. Scaricare i dati con:
    ```bash
    wget https://raw.githubusercontent.com/scarrazza/informatica2023/master/Lezione_6/data_moto.dat

    # oppure con

    curl -o data_moto.dat https://raw.githubusercontent.com/scarrazza/informatica2023/master/Lezione_6/data_moto.dat
    ```

2. Leggere da file i `N=1000` (numero noto di elementi) copie di punti **(x y)** con le variazioni di spazio (km) e tempo (h), calcolando per ogni elemento la velocità istantanea. Salvare tali valori in un array di tipo `double`.

3. Calcolare la velocità media, la rispettiva deviazione standard e stampare i risultati su schermo.

4. Calcolare la velocità minima e massima e stampare i risultati su schermo.

5. Verificare i risultati con il plot seguente:

<img src="images/moto.png" width="400">


## Esercizio 4 - Trovare la massa del bosone di Higgs

Scrivere un programma in C++ che legge da file le misure della distribuzione di massa invariante per il canale di produzione del bosone Higgs da 4 leptoni, effettuale da un acceleratore di particelle, e ne determina il valore più frequente per la sua massa.

La distribuzione in questione si presenta graficamente nel modo seguente:

<img src="images/higgs.png" width="400">

1. Scaricare i dati con:
    ```bash
    wget https://raw.githubusercontent.com/scarrazza/informatica2023/master/Lezione_6/data_higgs.dat

    # oppure con

    curl -o data_higgs.dat https://raw.githubusercontent.com/scarrazza/informatica2023/master/Lezione_6/data_higgs.dat
    ```

2. Leggere tutti i `N = 10000` valori di massa invariante e salvare i dati in un array `mass`.

3. Ordinare il vettore `mass` in modo crescente usando selection sort. (Controllare l'algoritmo stampando su schermo tutti i valori)

4. Estrarre il valore minimo e massimo direttamente da `mass` (senza implementare cicli o algoritmi). Stampare i valori su terminale.

5. Costruire un array `bins` che contenga i bordi superiori (upper edge) di un istogramma a partire dal valore minimo della massa al valore massimo con steps da 5 GeV. Consiglio: determinare il numero di bins necessari e creare un array dinamico per il binning.

6. Creare un array `freq` per le frequenze dell'istogramma.

7. Istogrammare e stampare su schermo i valori dei bins e frequenze.

8. Determinare il bin (lower-edge) di massa del Higgs con la frequenza più elevata.
