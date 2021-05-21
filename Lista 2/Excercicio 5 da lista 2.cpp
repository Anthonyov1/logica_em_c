#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
5.Desenvolva um programa em C que leia três números inteiros e mostre ao final o maior e o
menor dos números digitados. 
*/

main(){
setlocale(LC_ALL, "portuguese");
int n1, n2, n3;
	
	printf("Digite o primeiro numero : ");
	scanf("%i", &n1);
	printf("Digite o segundo numero : ");
	scanf("%i", &n2);
	printf("Digite o terceiro numero : ");
	scanf("%i", &n3);
	if(n1 > n2 && n1 > n3)
	{
		printf("O maior numero é o %i\n\n", n1);
	}
	else
	if(n2 > n1 && n2 > n3)
	{
		printf("O maior numero é o %i\n\n", n2);
	}
	else
	{
		printf("O maior numero é o %i\n\n", n3);
	}
	if(n1 < n2 && n1 < n3)
	{
		printf("O menor numero é o %i", n1);
	}
	else
	if(n2 < n1 && n2 < n3)
	{
		printf("O menor numero é o %i", n2);
	}
	else
	{
		printf("O menor numero é o %i", n3);
	}
getch ();	
}
