/*

	# funzioni

	# Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf


		funzioni

		Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf
		
		
		
			 - Programma "inverticifre.c": Programma in Linguaggio "C" che, mediante una funzione, inverte le cifre di un numero intero dato in input.
			 				Viene considerata la possibilità che il numero sia negativo.
		 						 				
*/

#include <stdio.h>

int inverti_cifre(int num);

int main()
{

	int num;

	printf("PROGRAMMA \"INVERTI CIFRE\"\n\n");

	printf("Inserire un numero:\t");
	scanf("%d",&num);
	
	printf("\nNumero inserito\t%d\n",num);

	num=inverti_cifre(num);

	printf("Numero con cifre invertite\t%d\n",num);
	
	putchar('\n');

	return 0;
	
}

int inverti_cifre(int num)
{

	int c,r=0;

	while(num)
	{
 
		c=num%10;
		num/=10;

		r=r*10+c;
		
	}

	return r;
	
}