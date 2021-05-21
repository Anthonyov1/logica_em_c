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
Excercicio 3 da aula 10
Crie um programa que permita a escolha das frutas especificadas abaixo, sendo elas identificadas por meio do seu valor correspondente.
1 => ABACAXI
2 => MAÇA
3 => PERA
Usando a instrução do..While identifique quais as frutas desejadas por seu usuário, lembrando que ele pode desejar somente
um tipo de fruta de cada vez. Porém deve existir o cuidado na identificação correta das frutas, pois o feirante só possui estes três
tipos. Sendo assim, o usuário que escolher uma fruta não existente deve ser notificado que a fruta não está disponível e a solicitação deve
ser feita novamente. Mostre no final o total de cada fruta adquirida, não podendo ser informada a quantidade pelo usuário.
*/
main(){
	setlocale(LC_ALL, "portuguese");
	int abacaxi = 0, maca = 0, pera = 0, frutas, qa, qm, qp;
	
	do{
	printf("Qual fruta o senhor deseja comprar[0- SAIR, 1- ABACAXI, 2- MAÇA, 3-PERA]? ");
	fflush(stdin);
	scanf("%i", &frutas);
	if(frutas >= 0 && frutas <= 3 ){
		switch(frutas){
			case 0:
				printf("Muito Obrigado!\n\n");
			break;
			case 1:
				printf("Quantas vai querer senhor? ");
				fflush(stdin);
				scanf("%i", &qa);
				printf("%i Abacaxi(s) então senhor.\n\n", qa);
				abacaxi ++;
				system("pause");
			break;
			case 2:
				printf("Quantas vai querer senhor? ");
				fflush(stdin);
				scanf("%i", &qm);
				printf("%i Maça(s) então senhor.\n\n", qm);
				maca ++;
				system("pause");
			break;
			case 3:
				printf("Quantas vai querer senhor? ");
				fflush(stdin);
				scanf("%i", &qp);
				printf("%i Pera(s) então senhor.\n\n", qp);
				pera ++;
				system("pause");
			break;
		}
			}else{
				printf("Não temos esta fruta senhor!\n\n");
				system("pause");
			}

} 	while(frutas != 0);
	printf("O senhor então levou %i de Abacaxi, %i de Maça e %i de Pera\n\n", abacaxi * qa, maca * qm, pera * qp);
	system("pause");
getch ();
}
