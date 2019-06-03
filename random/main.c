/*

	# funzioni

	# Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf


		funzioni

		Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf
		
		
		
			 - Directory "random": Linguaggio "C":
		 		- Modulo "random" ("random.h"|"random.c"): Contentente due funzioni:
		 			- "void random_init()" per l'inizializzazione del modulo.
		 			- "int random_between(int min,int max)" per la generazione di un numero pseudocasuale compreso tra min (incluso) e max (escluso).
		 		- File "main.c" per la verifica del modulo (con funzioni per i compiti che si ripetono).
			 					
		 		
*/

#include <stdio.h>

#include "random.h"

void genera_numeri(int num_c,int min,int max);

int main()
{
	int num_c=5;

	int min,max;

	printf("RANDOM:\n");
	printf("Modulo per la generazione di numeri pseudocasuali.\n\n\n\n");

	random_init();

	min=1;
	max=1;
	genera_numeri(num_c,min,max);

	min=1;
	max=2;
	genera_numeri(num_c,min,max);

	min=1;
	max=3;
	genera_numeri(num_c,min,max);

	min=100;
	max=150;
	genera_numeri(num_c,min,max);
	
	putchar('\n');

	return 0;
}

void genera_numeri(int num_c,int min,int max)
{
	int i;

	printf("\n\n%d\t numeri compresi tra \t%d\t e \t%d:\n",num_c,min,max);
	for (i=0;i<num_c;i++)
	{
		printf("%d",random_between(min,max));
		
		putchar('\n');
	}
}		 		