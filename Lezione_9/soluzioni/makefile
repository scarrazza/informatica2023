# Questo makefile contiene le istruzioni per compilare tutti gli esercizi
# Qui ho utilizzato alcune funzionalita' piu' avanzate del makefile come
# la definizione di variabili, CC, e riferimenti $@ e $<.
CC=g++

all: prog1 prog2 prog3 prog4

prog1: esercizio1.cc funzioni1.cc
	$(CC) -o $@ esercizio1.cc funzioni1.cc

prog2: esercizio2.cc
	$(CC) -o $@ $<

prog3: esercizio3.cc funzioni3.cc
	$(CC) -o $@ esercizio3.cc funzioni3.cc

prog4: esercizio4.cc funzioni4.cc
	$(CC) -o $@ esercizio4.cc funzioni4.cc

clean:
	rm -f prog1 prog2 prog3 prog4
