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
Excercicio de reforço 1:
Faça um algoritmo que leia um inteiro entre 1 e 12 e imprima o nome do mês por extenso. 
*/

main(){
	setlocale(LC_ALL, "portuguese");
	int mes;
	
		printf("Digite o mês que deseja [1 a 12]: ");
		scanf("%i", &mes);
		if(mes >= 1 && mes <= 12){
	switch(mes){
		case 1: printf("Mês de Janeiro");
		break;
		case 2:	printf("Mês de Fevereiro");
		break;
		case 3: printf("Mês de Março");
		break;
		case 4:	printf("Mês de Abril");
		break;
		case 5:	printf("Mês de Maio");
		break;
		case 6: printf("Mês de Junho"); 
		break;
		case 7: printf("Mês de Julho");
		break;
		case 8: printf("Mês de Agosto");
		break;
		case 9:	printf("Mês de Setembro");
		break;
		case 10: printf("Mês de Outubro");
		break;
		case 11: printf("Mês de Novembro");
		break;
		case 12: printf("Mês de Dezembro");
		break;
	}
	}else{ 
		printf("O mês digitado não é valido!");
	}


getch ();
}
