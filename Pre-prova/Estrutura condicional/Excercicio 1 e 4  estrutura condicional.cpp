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
1.Fa�a um programa em C que receba um n�mero e mostre uma mensagem caso
este n�mero seja maior que 10.
4.Caso contr�rio, mostre mensagem informando.
*/
main(){
	setlocale(LC_ALL, "portuguese");
	int valor;
	
	printf("Digite um numero menor ou maior que 10: ");
	scanf("%i", &valor);
	if(valor > 10){
		printf("� maior que 10!");
	} else if(valor == 10) {
		printf("Este n�mero � igual a 10!");
	} else {
		printf("� menor que 10!");
	}	

getch ();
}
