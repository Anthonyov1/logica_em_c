#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>


main(){
setlocale(LC_ALL, "Portuguese");
int dia_da_semana;

	printf("Digite o dia_da_semana: ");
	scanf("%i", &dia_da_semana);
	switch(dia_da_semana){	
		case 1:
			printf("hoj� � domingo");
		break;
		case 2:
			printf("hoje � segunda");
		break;
		case 3:
			printf("hoje � ter�a");
		break;
		case 4:
			printf("hoje � quarta");
		break;
		case 5:
			printf("hoje � quinta");
		break;
		case 6:
			printf("hoje � sexta");
		break;
		case 7:
			printf("hoje � sabado");
		break;
		default:
			printf("dia invalido\n");
	}
getch ();
}
