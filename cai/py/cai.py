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

import random

N_ANSWERS = 4

def cai_cifra():
	"""
		>>> from functools import reduce
		>>> cifre=[cai_cifra() for i in range(100)]
		>>> inRange=[c>=0 and c<10 for c in cifre]
		>>> allInRange=reduce(lambda x, y: x and y, inRange)
		>>> allInRange
		True
	"""
	return random.randrange(0,10)


def cai_risposta():
	"""
		>>> from functools import reduce
		>>> risposte=[cai_risposta() for i in range(100)]
		>>> inRange=[r>=0 and r<N_ANSWERS for r in risposte]
		>>> allInRange=reduce(lambda x, y: x and y, inRange)
		>>> allInRange
		True
	"""
	return random.randrange(0,N_ANSWERS)

def cai_esatta():
	risposta=cai_risposta()
	if risposta==0:
		print("\nVery good!\n")
	elif risposta==1:
		print("\nExcellent!\n")
	elif risposta==2:
		print("\nNice work!\n")
	elif risposta==3:
		print("\nKeep up the good work!\n")
	else:
		print("\nThere seems to be a problem: something gone wrong!\n")

def cai_errata():
	risposta = cai_risposta()
	if risposta == 0:
		print("\nNo, Please try again.\n")
	elif risposta == 1:
		print("\nWrong. Try once more.\n")
	elif risposta == 2:
		print("\nDon't give up!\n")
	elif risposta == 3:
		print("\nNo. Keep trying.\n")
	else:
		print("\nThere seems to be a problem: something gone wrong!\n")


if __name__=='__main__':
	import doctest
	doctest.testmod()