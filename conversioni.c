/*

	# funzioni

	# Programmi di Laboratorio di Programmazione in Linguaggio "C". Alunno: Bucchianico Enrico Ruggiero, 4^Finf


		funzioni

		Programmi di Laboratorio di Programmazione in Linguaggio "C". Alunno: Bucchianico Enrico Ruggiero, 4^Finf
		
		
		
			 - Programma "conversioni.c": Programma che chiede all'utente un intero compreso tra 0 e 255 e gli permette di scegliere se voglia convertire tale numero in binario, in 								ottale o in esadecimale.
			 					In base alla scelta effettuata stampa il numero originale e il suo equivalente nella base scelta.
			 						Il programma utilizza 5 funzioni.
				 						
*/

#include <stdio.h>

void menu();

void converti_in_binario(int num);

void converti_in_ottale(int num);

void converti_in_esadecimale(int num);

void stampa_bit(int bit);

int main()
{

	int num,scelta=0;
	
	do
	{
		printf("\nInserire un numero compreso tra 0 e 255:\t");
		scanf("%d",&num);
		if(num<0)
		{
			printf("\nERRORE!!! Numero minore di 0!\n");
		}
		else if(num>255)
		{
			printf("\nERRORE!!! Numero maggiore di 255!\n");
		}/*NO 'else' FOR THIS 'if'*/
	}
	while(num<0||num>255);
	
	do
	{
		menu();
		scanf("%d",&scelta);
		if(scelta<1||scelta>3)
		{
			printf("\nERRORE!!! Scelta non valida!\n");
		}
	}
	while(scelta<1||scelta>3);

	printf("\n\t%d(10)=",num);
	
	switch(scelta)
	{
		case 1:
			converti_in_binario(num);
			printf("(2)\n");
			break;
		case 2:
			converti_in_ottale(num);
			printf("(8)\n");
			break;
		case 3:
			converti_in_esadecimale(num);
			printf("(16)\n");
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
	"1) Binario\n"
	"2) Ottale\n"
	"3) Esadecimale\n\n"
	"Scelta: ");
}

void converti_in_binario(int num)
{
	int i,weight=128,bit;

	for (i=0;i<8;i++)
	{
		bit=num/weight;
		printf("%d",bit);
		num-=bit*weight;
		weight/=2;
	}
}

void converti_in_ottale(int num)
{
	int i,weight=64,bit;

	for (i=0;i<3;i++)
	{
		bit=num/weight;
		printf("%d",bit);
		num-=bit*weight;
		weight/= 8;
	}
}

void converti_in_esadecimale(int num)
{
	int i,weight=16,bit;
	
	for (i=0;i<2;i++)
	{
		bit=num/weight;
		stampa_bit(bit);
		num-=bit*weight;
		weight/=16;
	}
}

void stampa_bit(int bit)
{
	switch(bit) {
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			printf("%d",bit);
			break;
		case 10:
			putchar('A');
			break;
		case 11:
			putchar('B');
			break;
		case 12:
			putchar('C');
			break;
		case 13:
			putchar('D');
			break;
		case 14:
			putchar('E');
			break;
		case 15:
			putchar('F');
			break;
		default:
			putchar('-');
			break;
	}
}