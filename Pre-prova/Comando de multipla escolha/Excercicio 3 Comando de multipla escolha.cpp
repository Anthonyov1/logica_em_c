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
Excercicio 3 Comando de multipla escolha:
Dados tr�s valores A, B e C, em que A e B s�o n�meros reais e C � um caractere,
pede-se para imprimir o resultado da opera��o de A por B se C for um s�mbolo de
operador aritm�tico (+,-,*,/); caso contr�rio deve ser impressa uma mensagem de
operador n�o definido. Tratar erro de divis�o por zero. 
*/

main(){
	setlocale(LC_ALL, "portuguese");
	float valor1, valor2;
	char oa;
	
	printf("Digite o operador aritm�tico [+, -, *, /]: ");
	scanf("%c", &oa);	
	printf("Digite o valor 1: ");
	scanf("%f", &valor1);
	printf("Digite o valor 2: ");
	scanf("%f", &valor2);
	if(oa == '+' || oa  == '-' || oa == '*' || oa == '/'){
		switch(oa){
			case '+': printf("Resultado � %.2f", valor1 + valor2);
			break;
			case '-': printf("Resultado � %.2f", valor1 - valor2);
			break;
			case '*': printf("Resultado � %.2f", valor1 * valor2);
			break;
			case '/': printf("Resultado � %.2f", valor1 / valor2);
			break;
		}
	}else
		printf("Operador aritm�tico n�o definido!");
	
getch ();
}
