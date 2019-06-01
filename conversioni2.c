/*

	# funzioni

	# Programmi di Laboratorio di Programmazione in Linguaggio "C". Alunno: Bucchianico Enrico Ruggiero, 4^Finf


		funzioni

		Programmi di Laboratorio di Programmazione in Linguaggio "C". Alunno: Bucchianico Enrico Ruggiero, 4^Finf
		
		
		
			 - Programma "conversioni2.c": Programma che chiede all'utente un intero compreso tra 0 e 255 e gli permette di scegliere se voglia convertire tale numero in binario, in 								ottale o in esadecimale.
			 					In base alla scelta effettuata stampa il numero originale e il suo equivalente nella base scelta.
			 						Il programma utilizza 2 funzioni.
			 						
*/

#include <stdio.h>

void menu();

void converti(int num, int base);

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
			converti(num,2);
			printf("(2)\n");
			break;
		case 2:
			converti(num,8);
			printf("(8)\n");
			break;
		case 3:
			converti(num,16);
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

void converti(int num, int base)
{

	int i,weight,bit,num_cifre,error=0;

	switch(base)
	{
		case 2:
			num_cifre=8;
			weight=128;
			break;
		case 8:
			num_cifre=3;
			weight=64;
			break;
		case 16:
			num_cifre=2;
			weight=16;
			break;
		default:
			printf("\nERRORE!!! Base non valida! Possibili valori: 2, 8, 16!\n");
			error=1;
			break;
	}

	if(error)
	{
		return;
	}

	for (i=0;i<num_cifre;i++)
	{
	bit=num/weight;
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
		num-=bit*weight;
		weight/=base;
	}
}