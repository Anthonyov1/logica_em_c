#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
6.Desenvolva um programa em C que onde o usu�rio informe 2 valores inteiros e o pr�prio
algoritmo efetue a troca de valores de forma que a vari�vel A passe a possuir o valor da
vari�vel B e a vari�vel B passe a possuir o valor da vari�vel A. Apresentar os valores
trocados. 
*/

main(){
setlocale(LC_ALL, "portuguese");
int a,b,c;

	printf("Digite o valor de A : ");
	scanf("%i", &a);
	printf("digite o valor de B : ");
	scanf("%i", &b);
	c = a;
	a = b;
	b = c;
	printf("O valor de A agora � %i\n\n", a);
	printf("O valor de B agora � %i", b);

getch ();	
}
