#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
1.Excercicio 1 da lista 3.1
Elabore um programa que solicite ao usu�rio que digite 2 n�meros inteiros e ap�s ele
escolha uma opera��o � realizar, conforme segue:
A - Adi��o
S - Subtra��o
M - Multiplica��o
D - Divis�o
Mostrar o resultado da opera��o realizada. 
*/

main(){
	setlocale(LC_ALL, "portuguese");
	float N1, N2;
	char OA;
	
	printf("Digite o operador artimetico desejado [A+ S- M* D/]: ");
	scanf("%c", &OA);
	printf("Digite o primeiro numero: ");
	scanf("%f", &N1);
	printf("Digite o segundo numero: ");
	scanf("%f", &N2);
	switch(OA){
		case 'A': printf("A soma de N1 + N2 �: %.2f", N1 + N2);
		break;
		case 'S': printf("A subtra��o de N1 + N2 �: %.2f", N1 - N2);
		break;
		case 'M': printf("A multiplica��o de N1 * N2 �: %.2f", N1 * N2);
		break;
		case 'D':	printf("A divis�o de N1 / N2 �: %.2f", N1 / N2);
		break;
}


getch ();
}
