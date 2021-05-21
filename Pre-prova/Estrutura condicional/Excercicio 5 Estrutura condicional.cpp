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
Excercicio 5 Estrutura condicional:
Faça um programa em C que leia dois valores inteiros distintos e informe qual é o
maior
*/
main(){
	setlocale(LC_ALL, "portuguese");
	int valor1, valor2;
	
	printf("Digite o valor 1: ");
	scanf("%i", &valor1);
	printf("Digite o valor 2: ");
	scanf("%i", &valor2);
	if(valor1 > valor2){
		printf("O valor %i é maior que o valor %i", valor1,valor2);
	}else{ 
		if(valor2 > valor1)
			printf("O valor %i é maior que o valor %i", valor2, valor1);
	}

getch ();
}
