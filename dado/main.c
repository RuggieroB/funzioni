/*

	# funzioni

	# Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf


		funzioni

		Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf
		
		
		
			 - Directory "dado": Linguaggio "C":
			 		- Modulo "random" ("random.h"|"random.c"): Contentente due funzioni:
			 			- "void random_init()" per l'inizializzazione del modulo.
			 			- "int random_between(int min,int max)" per la generazione di un numero pseudocasuale compreso tra min (incluso) e max (escluso).
			 		- Modulo "dado" ("dado.h"|"dado.c"): Simula il lancio di un dado a 6 facce per 100 volte e conta il numero di occorrenze di ogni faccia mediante un 										     vettore.
			 							Infine stampa il risultato ottenuto mediante righe di asterischi.
			 		- File "main.c" per la verifica dei moduli
		 		
*/

#include <stdio.h>

#include "dado.h"

void stampa(int n);

int main()
{
	int launches=100,i;
	int faces[7];

	dado_init();

	printf("Lancio di un dado a 6 facce %d volte\n",launches);
	
	putchar('\n');

	for (i=1;i<=6;i++)
	{
		faces[i]=0;
	}

	for (i=0;i<launches;i++)
	{
		faces[dado_launch()]++;
	}

	for (i=1;i<=6;i++) {
		printf("#%d)\t[%d]\t",i,faces[i]);
		stampa(faces[i]);
		putchar('\n');
	}
	
	putchar('\n');

	return 0;
}

void stampa(int n)
{
	int i;

	for (i=0;i<n;i++)
	{
		putchar('*');
	}
}