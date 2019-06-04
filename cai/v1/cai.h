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

#ifndef CAI_H
#define CAI_H

void cai_init();

int cai_cifra();

int cai_risposta();

void cai_esatta();

void cai_errata();

#endif