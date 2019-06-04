/*

	# funzioni

	# Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf


		funzioni

		Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf
		
		
		
			 - Directory "cai": Linguaggio "C":
			 		Fornisce aiuto ad uno studente di scuola elementare ad apprendere la moltiplicazione.
			 		- Sottodirectory "v2":Versione N° 2:
			 			- Modulo "random" ("random.h"|"random.c"): Contentente due funzioni:
			 				- "void random_init()" per l'inizializzazione del modulo.
			 				- "int random_between(int min,int max)" per la generazione di un numero pseudocasuale compreso tra min (incluso) e max (escluso).
			 			- Modulo "cai" ("cai.h"|"cai.c"): Gestisce le operazioni legate alla scelta dei numeri e alla gestione delle risposte.
			 			- File "main.c" per la verifica dei moduli ed il calcolo delle risposte corrette tra 10 date.
		 			
*/

#include <stdio.h>

#include "cai.h"

#include "random.h"

#define N_ANSWERS 4

void cai_init()
{
	random_init();
}

int cai_cifra()
{
	return random_between(0,10);
}

int cai_risposta()
{
	return random_between(0,N_ANSWERS);
}

void cai_esatta()
{
	switch(cai_risposta())
	{
		case 0:
			printf("\nVery good!\n");
			break;
		case 1:
			printf("\nExcellent!\n");
			break;
		case 2:
			printf("\nNice work!\n");
			break;
		case 3:
			printf("\nKeep up the good work!\n");
			break;
		default:
			printf("\nThere seems to be a problem: somethin gone wrong!\n");
			break;
	}
	
	putchar('\n');
	
}

void cai_errata()
{
	switch(cai_risposta())
	{
		case 0:
			printf("\nNo, Please try again.\n");
			break;
		case 1:
			printf("\nWrong. Try once more.\n");
			break;
		case 2:
			printf("\nDon't give up!\n");
			break;
		case 3:
			printf("\nNo. Keep trying.\n");
			break;
		default:
			printf("\nThere seems to be a problem: somethin gone wrong!\n");
			break;
	}
  
	putchar('\n');
  
}