/*

	# funzioni

	# Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf


		funzioni

		Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf
		
		
		
			 - Directory "cai":
			 		Fornisce aiuto ad uno studente di scuola elementare ad apprendere la moltiplicazione.
			 		- Sottodirectory "v2":Versione N° 2: Linguaggio "C":
			 			- Modulo "random" ("random.h"|"random.c"): Contentente due funzioni:
			 				- "void random_init()" per l'inizializzazione del modulo.
			 				- "int random_between(int min,int max)" per la generazione di un numero pseudocasuale compreso tra min (incluso) e max (escluso).
			 			- Modulo "cai" ("cai.h"|"cai.c"): Gestisce le operazioni legate alla scelta dei numeri e alla gestione delle risposte.
			 			- File "main.c" per la verifica dei moduli ed il calcolo delle risposte corrette tra 10 date.
		 			
*/

#include <stdio.h>

#include "cai.h"

int main()
{
	int c1,c2,res,ans,answers=0,wrong=0,n_ans=10;

	cai_init();

	while(answers<n_ans)
	{
		c1=cai_cifra();
		c2=cai_cifra();

		res=c1*c2;

		do
		{
			printf("Quanto fa %d per %d?\t",c1,c2);
			scanf("%d",&ans);

			answers++;

			if(ans!=res)
			{
				wrong++;
				cai_errata();
			}
		}
		while(ans!=res&&answers<n_ans);

		if(ans==res)
		{
			cai_esatta();
		}
	}

	if((double)wrong/(double)n_ans>0.25)
	{
		printf("\nPlease ask your instructor for extra help\n");
	}

	putchar('\n');

  return 0;
  
}