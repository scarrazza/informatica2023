# Questo makefile contiene le istruzioni per compilare tutti gli esercizi
# Qui ho utilizzato alcune funzionalita' piu' avanzate del makefile come
# la definizione di variabili, CC, e riferimenti $@ e $<.
CC=g++

all: prog1 prog2 prog4 prog5 prog6 prog7

# esercizio 3 ##
prog1: esercizio1.cc
	$(CC) -o $@ $<

prog2: esercizio2.cc
	$(CC) -o $@ $<

esegui: prog2
	./prog2
#################

prog4: esercizio4.cc
	$(CC) -o $@ $<

prog5: esercizio5.cc
	$(CC) -o $@ $<

prog6: esercizio6.cc
	$(CC) -o $@ $<

prog7: esercizio7.cc
	$(CC) -o $@ $<

clean:
	rm prog1
	rm prog2
	rm prog4
	rm prog5
	rm prog6
	rm prog7
