#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
6.Desenvolva um programa em C que leia um n�mero inteiro e informe se o n�mero � par
ou �mpar.
*/

main(){
setlocale(LC_ALL, "portuguese");
int v;

	printf("Digite um valor : ");
	scanf("%i", &v);
	if (v % 2 == 0)
	{
		printf("O valor digitado � um numero par");
	}
	else
	{
		printf("o valor digitado � um numero impar");
	}
getch ();	
}
