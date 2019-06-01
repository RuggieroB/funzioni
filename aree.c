/*

	# funzioni

	# Programmi di Laboratorio di Programmazione in Linguaggio "C". Alunno: Bucchianico Enrico Ruggiero, 4^Finf


		funzioni

		Programmi di Laboratorio di Programmazione in Linguaggio "C". Alunno: Bucchianico Enrico Ruggiero, 4^Finf
		
		
		
			 - Programma "aree.c": Programma che chiede all'utente se voglia calcolare l'area di un quadrato o di un cerchio. 
			  			  In base alla scelta effettuata chiede il valore del lato o del raggio e stampa i risultati.
			  			  	Il programma utilizza 3 funzioni.
			  			  	
*/

#include <stdio.h>

void menu();

double area_quadrato(double lato);

double area_cerchio(double raggio);

int main()
{

	int scelta=0;

	double lato,raggio;
	
	printf("CALCOLO AREA DI UN QUADRATO O DI UN CERCHIO\n\n");
	
	do
	{
		menu();
		scanf("%d",&scelta);
		if(scelta<1||scelta>2)
		{
			printf("\nERRORE!!! Scelta non valida!\n");
		}
	}
	while(scelta<1||scelta>3);
	
	switch(scelta)
	{
		case 1:
			printf("\nInserire il lato del quadrato:\t");
			scanf("%lf",&lato);
			printf("\n\nArea del quadrato:\t%f",area_quadrato(lato));
			break;
		case 2:
			printf("\nInserire il raggio del cerchio:\t");
			scanf("%lf",&raggio);
			printf("\n\nArea del cerchio:\t%f",area_cerchio(raggio));
			break;
		default:
			/*NOT VALID CHOICE*/
			break;
	};
	
	putchar('\n');

	return 0;
}

void menu()
{
	printf("\nScegli la base:\n"
	"1) Quadrato\n"
	"2) Cerchio\n\n"
	"Scelta: ");
}

double area_quadrato(double lato)
{
	return (lato*lato);
}

double area_cerchio(double raggio)
{
	double pi=3.1415926535;
	
	return (pi*raggio*raggio);
}