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

int main()
{
	int num,guess,min=1,max=1000,clear;
	char retry='y';
  
	guess_init();


	do
	{
	
		printf("\nI have a number between 1 and 1000.\n\tCan you guess my number?\n\n\t\t");
		num=guess_num(min,max);
		
 		do
 		{
			printf("Your guess?\t");
			scanf("%d",&guess);
		}
		while(guess_control(num,guess)!=0);
		
		do
		{
		
		
			while((clear=getchar())!='\n')
			{
				;
			}

			printf("\nWould you like to play again (y or n)?\t");
			retry=getchar();
			
			if(retry=='n')
			{
				printf("\n\nBye! See you soon!\n");
			} /* NO 'else' FOR THIS 'if'*/
			
		}
		while(retry!='y'&&retry!='n');

	}
	while(retry=='y');
	
	putchar('\n');

	return 0;
	
}