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
Fa�a um programa em C que receba um n�mero real, digitado pelo usu�rio e
mostre o menu para selecionar o tipo de c�lculo que deve ser realizado:
 Raiz quadrada
 O n�mero elevado a pot�ncia 2
 10% do n�mero
 O dobro do n�mero 
*/

main(){
	setlocale(LC_ALL, "portuguese");
	float valor;
	char calc;
	
	printf("Digite o operador aritm�tico que deseja usar");
	printf("\n[v = raiz quadrada]");
	printf("\n[^ = elevado a pot�ncia 2]");
	printf("\n[p = 10 porcento do n�mero]");
	printf("\n[* = dobro do n�mero]");
	printf("\n:");
	scanf("%c", &calc);
	printf("Digite o valor que voc� deseja que seja calculado:");
	scanf("%f", &valor);
	if(calc == 'v' || calc == '^' || calc == 'p' || calc == '*'){
		switch(calc){
			case 'v': printf("O resultado � %.2f", sqrt(valor));
			break;
			case '^': printf("O resultado � %.2f", pow(valor,2));
			break;
			case 'p': printf("O resultado � %.2f", valor / 10);
			break;
			case '*': printf("O resultado � %.2f", valor * 2);
			break;
		}		
	} else {
		printf("Esse operador n�o se encontra nas op��es senhor.");
	}

getch ();
}
