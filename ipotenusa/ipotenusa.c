/*

	# funzioni

	# Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf


		funzioni

		Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf
		
		
		
			- Directory "ipotenusa":
			 	 - Programma "ipotenusa.c": Programma in Linguaggio "C" che, mediante una funzione, calcola l'ipotenusa dei seguenti triangoli rettangoli.
								Triangolo 1)  Lato 1: 3;    Lato 2: 4;
								Triangolo 2)  Lato 1: 5;    Lato 2: 12;
								Triangolo 3)  Lato 1: 8;    Lato 2: 15;

*/

double ipotenusa(double lato1,double lato2);

#include <stdio.h>

#include <math.h>

int main()
{

	printf("Triangolo:\tLato 1:\t\tLato 2:\t\tIpotenusa:\n");
	printf("\t%d)\t%f\t%f\t%f\n",1,3.0,4.0,ipotenusa(3.0,4.0));
	printf("\t%d)\t%f\t%f\t%f\n",2,5.0,12.0,ipotenusa(5.0,12.0));
	printf("\t%d)\t%f\t%f\t%f\n",3,8.0,15.0,ipotenusa(8.0,15.0));
	
	putchar('\n');

	return 0;
}

double ipotenusa(double lato1,double lato2)
{
	return sqrt(lato1*lato1+lato2*lato2);
}