/*

	# funzioni

	# Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf


		funzioni

		Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf
		
		
		
			 - Directory "cai": Linguaggio "C":
			 		Fornisce aiuto ad uno studente di scuola elementare ad apprendere la moltiplicazione.
			 		- Sottodirectory "v1":Versione N° 1:
			 			- Modulo "random" ("random.h"|"random.c"): Contentente due funzioni:
			 				- "void random_init()" per l'inizializzazione del modulo.
			 				- "int random_between(int min,int max)" per la generazione di un numero pseudocasuale compreso tra min (incluso) e max (escluso).
			 			- Modulo "cai" ("cai.h"|"cai.c"): Gestisce le operazioni legate alla scelta dei numeri e alla gestione delle risposte.
			 			- File "main.c" per la verifica dei moduli.
		 			
*/

#include <stdio.h>

#include "cai.h"

int main()
{
	int c1,c2,res,ans;

	cai_init();

	while(1)
	{
		c1=cai_cifra();
		c2=cai_cifra();

		res=c1*c2;

		do
		{
			printf("Quanto fa %d per %d?\t(CTRL+C per uscire) ",c1,c2);
			scanf("%d",&ans);

			if(ans!=res)
			{
				cai_errata();
			}
		}
		while(ans!=res);

		cai_esatta();
	}
	
	putchar('\n');

	return 0;
  
}