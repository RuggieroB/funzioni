/*

	# funzioni

	# Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf


		funzioni

		Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf
		
		
		
			 - Directory "flip": Linguaggio "C":
			 		- Modulo "random" ("random.h"|"random.c"): Contentente due funzioni:
			 			- "void random_init()" per l'inizializzazione del modulo.
			 			- "int random_between(int min,int max)" per la generazione di un numero pseudocasuale compreso tra min (incluso) e max (escluso).
			 		- Modulo "coin" ("coin.h"|"coin.c"): Simula il lancio di una moneta per 100 volte e conta il numero di occorrenze di "Head" e "Tail".
			 		- File "main.c" per la verifica dei moduli.
		 		
*/

#include <stdio.h>
#include "coin.h"

int simulation(int flip);


int main()
{
	int flip=100,head_c=0,tail_c=0;

	coin_init();

	printf("Lancio di una moneta \t%d\t volte\n",flip);
	head_c=simulation(flip);
	tail_c=flip-head_c;

	printf("\n\nTotale Head: %d\n",head_c);
        printf("\nTotale Tail: %d\n",tail_c);
        
        putchar('\n');

	return 0;
}

int simulation(int flip)
{
	int i,c=0;

	for (i=0;i<flip;i++)
	{
		if (coin_flip()==0)
		{
			c++;
		}
	}

	return c;
}