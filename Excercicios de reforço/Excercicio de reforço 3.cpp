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
Excercicio de reforoço 3
Crie um algoritmo que leia um número de 1 a 7 e imprima o dia da semana correspondente.
Sabendo que 1 corresponde ao Domingo.
*/

main(){
	setlocale(LC_ALL, "portuguese");
	int semana;
	
	printf("Digite um valor de 1 a 7: ");
	scanf("%i", &semana);	
	if(semana >= 1 && semana <= 7){
	switch(semana){
		case 1: printf("É Domingo");
		break;
		case 2: printf("É Segunda-feira");
		break;
		case 3: printf("É Terça-feira");
		break;
		case 4: printf("É Quarta-feira");
		break;
		case 5: printf("É Quinta-feira");
		break;
		case 6: printf("É sexta-feira");
		break;
		case 7: printf("É Sabado");
		break;
}
	}else{
		printf("O dia da semana é invalido!");
	}


getch ();
}
