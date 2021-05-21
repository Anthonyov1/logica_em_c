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
Excercicio 1 e 4 estrutura condicional
1.Faça um programa em C que receba um número e mostre uma mensagem caso
este número seja maior que 10.
4.Caso contrário, mostre mensagem informando.
*/
main(){
	setlocale(LC_ALL, "portuguese");
	int valor;
	
	printf("Digite um numero menor ou maior que 10: ");
	scanf("%i", &valor);
	if(valor > 10){
		printf("É maior que 10!");
	} else if(valor == 10) {
		printf("Este número é igual a 10!");
	} else {
		printf("É menor que 10!");
	}	

getch ();
}
