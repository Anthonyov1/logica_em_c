#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
7.Desenvolva um programa em C que leia o dia, o mês e o ano de uma data e informe se a
data é válida ou não. Caso não seja, diga o motivo. Suponha que todos os meses tem 31
dias.
*/

main(){
setlocale(LC_ALL, "portuguese");
int d, m, a;

	printf("Digite o dia : ");
	scanf("%i", &d);
	printf("Digite o mes : ");
	scanf("%i", &m);
	printf("Digite o ano : ");
	scanf("%i", &a);
	if( d >= 1 && d <= 31 || m >= 1 && m <= 12)
	{
		printf("Data valida: %i/%i/%i ", d, m, a);
	}
	else
	{
		printf("A data não é valida!");
	}

getch ();		
}
