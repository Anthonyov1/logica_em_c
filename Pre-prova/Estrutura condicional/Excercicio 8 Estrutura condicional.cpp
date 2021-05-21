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
Excercicio 8 Estrutura condicional
Faça um programa em C que leia dois números e identifique se são iguais ou
diferentes. Caso eles sejam iguais imprima uma mensagem dizendo que eles são
iguais. Caso sejam diferentes, informe qual número é o maior, e uma mensagem
que são diferentes.
*/ 
main(){
	setlocale(LC_ALL, "portuguese");
	int valor1, valor2;
	
	printf("Digite o valor 1: ");
	scanf("%i", &valor1);
	printf("Digite o valor 2: ");
	scanf("%i", &valor2);
	if(valor1 == valor2){
		printf("Os valores são iguais!");
	}else
		if(valor1 > valor2){
			printf("O valor %i é maior que o valor %i!\n", valor1, valor2);
			printf("Eles são diferentes!");
		}else
			if(valor2 > valor1){
				printf("O valor %i é maior que o valor %i!\n", valor2, valor1);
				printf("Eles são diferentes!");
			}
		
getch ();
}
