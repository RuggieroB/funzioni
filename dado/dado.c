/*

	# funzioni

	# Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf


		funzioni

		Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf
		
		
		
			 - Directory "dado": Linguaggio "C":
			 		- Modulo "random" ("random.h"|"random.c"): Contentente due funzioni:
			 			- "void random_init()" per l'inizializzazione del modulo.
			 			- "int random_between(int min,int max)" per la generazione di un numero pseudocasuale compreso tra min (incluso) e max (escluso).
			 		- Modulo "dado" ("dado.h"|"dado.c"): Simula il lancio di un dado a 6 facce per 100 volte e conta il numero di occorrenze di ogni faccia mediante un vettore.
			 							Infine stampa il risultato ottenuto mediante righe di asterischi.
			 		- File "main.c" per la verifica dei moduli
		 		
*/

#include "random.h"

#include "dado.h"

void dado_init()
{
	random_init();
}

int dado_launch()
{
	return (random_between(1,7));
}