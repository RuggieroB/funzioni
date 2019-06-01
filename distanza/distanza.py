'''

	# funzioni

	# Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf


		funzioni

		Programmi di Laboratorio di Programmazione in Linguaggio "C" e Linguaggio "Python" ("PY"). Alunno: Bucchianico Enrico Ruggiero, 4^Finf
		
		
			- Cartella "distanza":
			 	- Programma "distanza.py": Programma in Linguaggio "Python" ("PY") che, mediante una funzione, calcola la distanza tra due punti del piano (due tuple). 
			 					Il programma deve far uso di una funzione anche per l'input delle coordinate di un singolo punto.	
			
'''

print("DISTANZA TRA 2 PUNTI\n\n")

def distanza(p1,p2):
	dX=p1[0]-p2[0]
	dY=p1[1]-p2[1]

	return (dX**2+dY**2)**0.5

def input_coordinate():
	X=input('Coordinata X:\t')
	Y=input('Coordinata Y:\t')

	return (float(X),float(Y))

def stampa_coordinate(p):
	print('x:\t',p[0])
	print('Y:\t',p[1])

print("Punto 1:\t")
p1=input_coordinate()

print("\nPunto 2:\t")
p2=input_coordinate()

print("\nPrimo punto:\t")
stampa_coordinate(p1)

print("\nSecondo punto:\t")
stampa_coordinate(p2)

print("\nDistanza tra i punti:\t",distanza(p1,p2))