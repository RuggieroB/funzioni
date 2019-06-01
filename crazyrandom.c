/*

# funzioni

# Programmi di Laboratorio di Programmazione in Linguaggio "C". Alunno: Bucchianico Enrico Ruggiero, 4^Finf


	funzioni

	Programmi di Laboratorio di Programmazione in Linguaggio "C". Alunno: Bucchianico Enrico Ruggiero, 4^Finf
	
	
	
		  - Programma "crazyrandom.c": Programma che utilizza una funzione la quale estrae e restituisce un numero intero pari ad una cifra per le prime tre invocazioni e un numero 							dispari per le seguenti tre.
		  
*/

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

int crazy_random();

int main()
{

	srand(time(NULL));

	printf("CRAZY RANDOM\n\n");
	
	printf("Crazy Random\n\n");

	printf("Estrae tre numeri pari:\n");
	printf("\t%d\n",crazy_random());
	printf("\t%d\n",crazy_random());
	printf("\t%d\n",crazy_random());

	printf("\nD'ora in avanti estrae solo numeri dispari:\n");
	printf("\t%d\n",crazy_random());
	printf("\t%d\n",crazy_random());
	printf("\t%d\n",crazy_random());
	
	putchar('\n');

	return 0;
}

int crazy_random()
{


	static int count=0;

	int r=rand()%5,num;

	if(count<3)
	{
		num=2*r;
	}
	else
	{
		num=2*r+1;
	}

	count++;

	return num;

}