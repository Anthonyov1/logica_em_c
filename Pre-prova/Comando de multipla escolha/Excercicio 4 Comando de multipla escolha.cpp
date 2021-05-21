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
Excercicio 4 Comando de multipla escolha:
Faça um programa em C que receba um número real, digitado pelo usuário e
mostre o menu para selecionar o tipo de cálculo que deve ser realizado:
 Raiz quadrada
 O número elevado a potência 2
 10% do número
 O dobro do número 
*/

main(){
	setlocale(LC_ALL, "portuguese");
	float valor;
	char calc;
	
	printf("Digite o operador aritmético que deseja usar");
	printf("\n[v = raiz quadrada]");
	printf("\n[^ = elevado a potência 2]");
	printf("\n[p = 10 porcento do número]");
	printf("\n[* = dobro do número]");
	printf("\n:");
	scanf("%c", &calc);
	printf("Digite o valor que você deseja que seja calculado:");
	scanf("%f", &valor);
	if(calc == 'v' || calc == '^' || calc == 'p' || calc == '*'){
		switch(calc){
			case 'v': printf("O resultado é %.2f", sqrt(valor));
			break;
			case '^': printf("O resultado é %.2f", pow(valor,2));
			break;
			case 'p': printf("O resultado é %.2f", valor / 10);
			break;
			case '*': printf("O resultado é %.2f", valor * 2);
			break;
		}		
	} else {
		printf("Esse operador não se encontra nas opções senhor.");
	}

getch ();
}
