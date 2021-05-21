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
			printf("hojé é domingo");
		break;
		case 2:
			printf("hoje é segunda");
		break;
		case 3:
			printf("hoje é terça");
		break;
		case 4:
			printf("hoje é quarta");
		break;
		case 5:
			printf("hoje é quinta");
		break;
		case 6:
			printf("hoje é sexta");
		break;
		case 7:
			printf("hoje é sabado");
		break;
		default:
			printf("dia invalido\n");
	}
getch ();
}
