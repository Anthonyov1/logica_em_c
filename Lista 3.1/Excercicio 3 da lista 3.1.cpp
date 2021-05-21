#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
3.Crie um programa que receba um inteiro, de 1 até 12, representando os meses do ano e
retorne o número de dias do mês. Use switch. É permitida a utilização de SOMENTE 2
COMANDOS BREAK.
*/

main(){
	setlocale(LC_ALL, "portuguese");
	int Mes, dia;
	
	Mes = 0; dia = 0;
	printf("Digite o mes desejado: ");
	scanf("%i", &Mes);
	if (Mes >= 1 && Mes <= 12){
	
	switch(Mes){
		case 1:		
		case 3:
		case 5:		
		case 7:	
		case 8:		
		case 10:	
		case 12:	dia = 31;
		break;
		case 4:
		case 6:
		case 9:
		case 11: 	dia = 30;
		break;
		default: 	dia = 28;
	}
	printf("O mes %i tem %i dias", Mes, dia);
	
	}else{
		printf("\n\nMes invalido");
	}	
getch ();
}
