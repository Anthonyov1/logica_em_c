#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
6.Desenvolva um programa em C que onde o usuário informe 2 valores inteiros e o próprio
algoritmo efetue a troca de valores de forma que a variável A passe a possuir o valor da
variável B e a variável B passe a possuir o valor da variável A. Apresentar os valores
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
	printf("O valor de A agora é %i\n\n", a);
	printf("O valor de B agora é %i", b);

getch ();	
}
