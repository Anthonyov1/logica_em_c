#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>

/*
Excercicio de refor�o 1:
Fa�a um algoritmo que leia um inteiro entre 1 e 12 e imprima o nome do m�s por extenso. 
*/

main(){
	setlocale(LC_ALL, "portuguese");
	int mes;
	
		printf("Digite o m�s que deseja [1 a 12]: ");
		scanf("%i", &mes);
		if(mes >= 1 && mes <= 12){
	switch(mes){
		case 1: printf("M�s de Janeiro");
		break;
		case 2:	printf("M�s de Fevereiro");
		break;
		case 3: printf("M�s de Mar�o");
		break;
		case 4:	printf("M�s de Abril");
		break;
		case 5:	printf("M�s de Maio");
		break;
		case 6: printf("M�s de Junho"); 
		break;
		case 7: printf("M�s de Julho");
		break;
		case 8: printf("M�s de Agosto");
		break;
		case 9:	printf("M�s de Setembro");
		break;
		case 10: printf("M�s de Outubro");
		break;
		case 11: printf("M�s de Novembro");
		break;
		case 12: printf("M�s de Dezembro");
		break;
	}
	}else{ 
		printf("O m�s digitado n�o � valido!");
	}


getch ();
}
