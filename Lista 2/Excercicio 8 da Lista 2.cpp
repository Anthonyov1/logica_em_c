#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
8.Para doar sangue � necess�rio ter entre 18 e 67 anos. Desenvolva um programa em C que
leia a idade de uma pessoa e diga se ela pode doar sangue ou n�o. Use operadores l�gicos. 
*/

main(){
setlocale(LC_ALL, "portuguese");
int idade;

	printf("Digite sua idade : ");
	scanf("%i", &idade);
	if (idade < 18 && idade >= 67)
	{
		printf("Voce pode doar sangue! ");
	}
	else
	{
		printf("Voce n�o pode doar sangue! ");
	} 

getch ();		
}
