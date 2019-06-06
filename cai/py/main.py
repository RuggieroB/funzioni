'''

	# funzioni

	# Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf


		funzioni

		Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf
		
		
		
			 - Directory "cai":
			 		Fornisce aiuto ad uno studente di scuola elementare ad apprendere la moltiplicazione.
			 		- Sottodirectory "py": Versione N° 2: Linguaggio "Python" ("PY"):
			 			- Modulo "cai.py": Gestisce le operazioni legate alla scelta dei numeri, generati in maniera pseudocasuale - compresi tra min (incluso) e max 									    (escluso) - e le risposte.
			 			- File "main.py" per la verifica dei moduli ed il calcolo delle risposte corrette tra 10 date.
		 			
'''

import cai

answers=0
wrong=0
n_ans=10

while answers<n_ans:
	c1=cai.cai_cifra()
	c2=cai.cai_cifra()

	res=c1*c2

	print("Domanda # %d (%d)\n"%(answers+1,n_ans))
	print("Quanto fa %d per %d?\t"%(c1,c2))
	answer=input()
	answer=int(answer)

	answers+=1

	if answer!=res:
		wrong+=1
		cai.cai_errata()
	else:
		cai.cai_esatta()

	while answer!=res and answers<n_ans:
		print("Domanda # %d (%d)\n"%(answers+1,n_ans))
		print("Quanto fa %d per %d?\t"%(c1,c2))
		answer=input()
		answer=int(answer)

		answers+=1

		if answer!=res:
			wrong+=1
			cai.cai_errata()
		else:
			cai.cai_esatta()

wrong=float(wrong)
n_ans=float(n_ans)
if wrong/n_ans>0.25:
	print("\nPlease ask your instructor for extra help\n\n")