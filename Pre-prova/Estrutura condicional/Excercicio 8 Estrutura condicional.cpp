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
Fa�a um programa em C que leia dois n�meros e identifique se s�o iguais ou
diferentes. Caso eles sejam iguais imprima uma mensagem dizendo que eles s�o
iguais. Caso sejam diferentes, informe qual n�mero � o maior, e uma mensagem
que s�o diferentes.
*/ 
main(){
	setlocale(LC_ALL, "portuguese");
	int valor1, valor2;
	
	printf("Digite o valor 1: ");
	scanf("%i", &valor1);
	printf("Digite o valor 2: ");
	scanf("%i", &valor2);
	if(valor1 == valor2){
		printf("Os valores s�o iguais!");
	}else
		if(valor1 > valor2){
			printf("O valor %i � maior que o valor %i!\n", valor1, valor2);
			printf("Eles s�o diferentes!");
		}else
			if(valor2 > valor1){
				printf("O valor %i � maior que o valor %i!\n", valor2, valor1);
				printf("Eles s�o diferentes!");
			}
		
getch ();
}
