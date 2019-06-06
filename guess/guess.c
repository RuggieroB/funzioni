/*

# funzioni

# Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf


	funzioni

	Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf
	
	
	
		 - Directory "guess": Linguaggio "C":
		  		- Modulo "random" ("random.h"|"random.c"): Contentente due funzioni:
		 			- "void random_init()" per l'inizializzazione del modulo.
		 			- "int random_between(int min,int max)" per la generazione di un numero pseudocasuale compreso tra min (incluso) e max (escluso).
		 		- Modulo "guess" ("guess.h"|"guess.c"): Indovinare un numero compreso tra 1 e 1000.
		 		- File "main.c" per la verifica dei moduli.
		 		
*/

#include <stdio.h>

#include "guess.h"

#include "random.h"

void guess_init()
{
	random_init();
}

int guess_num(int min,int max)
{
	return random_between(min,max+1);
}

int guess_control(int num,int guess)
{
	if(num==guess)
	{
		printf("\nExcellent! You guess the number!\n");
	}
	else if(num<guess)
	{
		printf("\nToo high. Try again.\n");
	}
	else
	{
		printf("\nToo low. Try again.\n");
	}
	
	putchar('\n');

	return guess-num;
  
}