/*

	# funzioni

	# Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf


		funzioni

		Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf
		
		
		
			 - Directory "random": Linguaggio "C":
			 		- Modulo "random.h"/"random.c": Contentente due funzioni:
			 			- "void random_init()" per l'inizializzazione del modulo.
			 			- "int random_between(int min,int max)" per la generazione di un numero pseudocasuale compreso tra min (incluso) e max (escluso).
			 		- File "main.c" per la verifica del modulo (con funzioni per i compiti che si ripetono).
		 		
*/

#ifndef RANDOM_H
#define RANDOM_H

void random_init();

int random_between(int min,int max);

#endif