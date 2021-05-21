#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
1.Excercicio 1 da lista 3.1
Elabore um programa que solicite ao usuário que digite 2 números inteiros e após ele
escolha uma operação à realizar, conforme segue:
A - Adição
S - Subtração
M - Multiplicação
D - Divisão
Mostrar o resultado da operação realizada. 
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
		case 'A': printf("A soma de N1 + N2 é: %.2f", N1 + N2);
		break;
		case 'S': printf("A subtração de N1 + N2 é: %.2f", N1 - N2);
		break;
		case 'M': printf("A multiplicação de N1 * N2 é: %.2f", N1 * N2);
		break;
		case 'D':	printf("A divisão de N1 / N2 é: %.2f", N1 / N2);
		break;
}


getch ();
}
