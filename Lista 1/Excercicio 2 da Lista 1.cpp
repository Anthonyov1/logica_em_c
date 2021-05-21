#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

//2.Desenvolva um programa em C que receba dois números e exiba o resultado da sua soma.

main(){
setlocale(LC_ALL, "portuguese");
int soma, a, b;	
	
	printf("Digite o valor de A: ");
	scanf("%i", &a);
	printf("Digite o valor de B: ");
	scanf("%i", &b);
	soma = a + b;
	printf("a soma de A + B = %i", soma);


getch ();
//system("pause");
}
