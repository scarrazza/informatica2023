# Questo makefile contiene le istruzioni per compilare tutti gli esercizi
# Qui ho utilizzato alcune funzionalita' piu' avanzate del makefile come
# la definizione di variabili, CC, e riferimenti $@ e $<.
CC=g++

all: prog1 prog2 prog3 prog4

prog1: esercizio1.cc
	$(CC) -o $@ $<

prog2: esercizio2.cc
	$(CC) -o $@ $<

prog3: esercizio3.cc
	$(CC) -o $@ $<

prog4: esercizio4.cc
	$(CC) -o $@ $<

clean:
	rm -f prog1
	rm -f prog2
	rm -f prog3
	rm -f prog4
	rm -f prog5
