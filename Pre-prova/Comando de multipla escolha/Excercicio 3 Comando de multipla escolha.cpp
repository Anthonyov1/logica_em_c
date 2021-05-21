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
Dados três valores A, B e C, em que A e B são números reais e C é um caractere,
pede-se para imprimir o resultado da operação de A por B se C for um símbolo de
operador aritmético (+,-,*,/); caso contrário deve ser impressa uma mensagem de
operador não definido. Tratar erro de divisão por zero. 
*/

main(){
	setlocale(LC_ALL, "portuguese");
	float valor1, valor2;
	char oa;
	
	printf("Digite o operador aritmético [+, -, *, /]: ");
	scanf("%c", &oa);	
	printf("Digite o valor 1: ");
	scanf("%f", &valor1);
	printf("Digite o valor 2: ");
	scanf("%f", &valor2);
	if(oa == '+' || oa  == '-' || oa == '*' || oa == '/'){
		switch(oa){
			case '+': printf("Resultado é %.2f", valor1 + valor2);
			break;
			case '-': printf("Resultado é %.2f", valor1 - valor2);
			break;
			case '*': printf("Resultado é %.2f", valor1 * valor2);
			break;
			case '/': printf("Resultado é %.2f", valor1 / valor2);
			break;
		}
	}else
		printf("Operador aritmético não definido!");
	
getch ();
}
