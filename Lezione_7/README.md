# Laboratorio di informatica 7
### Prof. Stefano Carrazza - Corso C

**Riassunto:** Esercizi di base in C++: puntatori e funzioni.

Prima di iniziare suggeriamo di create una cartella per questa lezione in cui potete salvare tutti i files che saranno creati per gli esercizi.
```bash
cd ~/           # ci porta alla home directory
mkdir lezione7  # crea la directory sulla vostra home
cd lezione7     # entrate dentro la cartella
```
dopodiché creare un `makefile` con le istruzioni di compilazione per tutti gli esercizi.

## Esercizio 1 - Hello World puntatori

Scrivere un programma in C++ in cui vengono utilizzati puntatori.

1. Creare una variabile `x` e un puntatore `*p` di tipo `double` inizializzati
rispettivamente con `5.5` e `NULL`.

2. Stampare su terminale:
   - il valore in memoria della variabile `x`.
   - l'indirizzo di memoria della variabile `x`.
   - l'indirizzo puntato dal puntatore `p`.
   - l'indirizzo di memoria del puntatore `p`.

3. Assegnare al puntatore `p` l'indirizzo della variabile `x`, e stampare su
terminale l'indirizzo puntato da `p` e il rispettivo valore salvato.

4. Chiedere da terminale un numero di tipo `double` e assegnarlo al valore puntato da `p`. Controllare che il valore di `x` è stato modificato.

5. Creare un array dinamico di tipo `double` di dimensione 10, stampare l'indirizzo
di memoria per tutte le componenti dell'array. Verificare che gli indirizzi distano
tra di loro il numero di bytes del tipo `double`. (Ricordarsi di eliminare l'array
prima della fine del main)

## Esercizio 2 - Hello world funzioni

Scrivere un programma in C++ in cui vengono utilizzate delle funzioni.

1. Creare un array su stack `int v[10] = {9,2,1,3,4,7,0,11,20,5};`.

2. Scrivere una funzione `print_array` di tipo `void` che prende come argomento un array intero e la sua rispettiva dimensione e stampa su schermo il suo contenuto. Testare sul `main` la chiamata a `print_array` con `v`.

3. Scrivere una funzione `max_array` di tipo `int` che restituisce il valore massimo presente in un array. Testare l'implementazione con `v`, stampando dal main il suo valore massimo.

4. Scrivere una funzione `min_array` di tipo `int` che restituisce il valore minimo presente in un array. Testare l'implementazione con `v`, stampando dal main il suo valore minimo.

5. Scrivere una funzione `min_max_array` di tipo `void` che restituisce il valore
massimo e minimo di un array `int` tramite due argomenti `min` e `max` passati alla funzione per riferimento.

6. Scrivere una funzione `sort_array` di tipo `void` che ordina (selection sort) in modo crescente un array di tipo `int`. Testare la funzione sempre con l'array `v` e stampare il suo contenuto

## Esercizio 3 - Integrazione numerica di una funzione

Scrivere un programma in C++ in cui si calcola l'integrale numerico di una funzione analitica, usando la regola dei trapezi:
```
 /b
 |  f(x) dx =  d * Sum_{i=0,n-1} ( f(a + i * d) + f(a + (i + 1) * d) ) / 2
 /a
```
dove `d = (b-a)/n`.

1. Implementare una funzione `gauss` di tipo `double` che restituisce il valore di una funzione Gaussiana normalizzata centrata in `mu=0` e con `sigma=1`:
```
gauss(x) = 1/(sqrt(2*pi)) * exp(-x*x/2)
```

2. Implementare una funzione `integrate_gaussian` di tipo `double` che prende come argomenti `a`, `b` e `n` (numero di steps), e calcola l'integrale numerico di `gauss` tra `a` e `b`.

3. Testare la funzione precedente per `(a,b) = (-10, 10)` e `(a,b) = (-1,1)`, per ogni configurazione far variare `n=[10,100]`.

## Esercizio 4 - Discriminatore di punti

Scrivere un programma in C++ capace di discriminare se un punto di coordinata cartesiana `(x,y)` si trova all'interno
di un cerchio con centro in `c=(1, 1)` e raggio `r=1`.

0. Creare variabili di tipo `const double` e salvare le proprietà del cerchio sopracitato.

1. Costruire un funzione `distanza` di tipo `double` che calcola la distanza tra 2
coordinate, `x` e `y` di tipo double e il centro del cerchio. Per farlo, passare
come argomento le coordinate da testare e il centro del cerchio. Suggerimento: utilizzare
il teorema di Pitagora dove i cateti sono le differenze tra le coordinate inserite e quelle del centro del cerchio.

2. Implementare una funzione `check_circle` di tipo `void` che prende come argomenti le 4 coordinate precedenti e il raggio del cerchio `(x, y, x_c, y_c, r)` e una variabile `status` di tipo `bool` per riferimento. Calcolare all'interno di questa funzione: la chiamata alla funzione `distanza` seguita dalla verifica se il punto si trova all'interno del cerchio. Salvare in `status` il valore `true` nel caso in cui il punto si trova all'interno del cerchio, `false` altrimenti.

2. Implementare un ciclo infinito in cui coppie di coordinate `(x,y)` vengono
introdotte da terminale. Per ogni coppia di coordinate, applicare il discriminatore.

3. Testare per le seguenti coppie di punti:
```
(x,y) = (1.1, 0.7)  ->  true
(x,y) = (2.1, 0.7)  ->  false
(x,y) = (0.5, 0.3)  ->  true
(x,y) = (1.0, 1.0)  ->  true
(x,y) = (0.1, 0.1)  ->  false
```


## Esercizio 5 - Prodotto scalare, norma, matrice trasposta

Scrivere un programma in C++ in cui vengono eseguite operazioni di algebra lineare.

1. Creare due arrays 1D di tipo `double` con `v = {1,2,3,4,5}, w = {10,2,4,3,2}`. Creare un array 2D di tipo `double` con `double M[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}}`.

2. Implementare una funzione `scalar` di tipo `double` che restituisce il prodotto scalare tra 2 arrays. Testare la funzione con `v` e `w` e stampare il risultato su terminale.

3. Implementare una funzione `norm` di tipo `double` che calcola la norma di un array usando la funzione `scalar`. Testare l'implementazione con `v` e stampare il risultato su terminale.

4. Implementare una funzione `scambia` di tipo `void` che scambia il valore tra 2 oggetti per riferimento. Applicare questa funzione su `M` (i.e. calcolo della matrice trasposta) e stampare il risultato su terminale.
