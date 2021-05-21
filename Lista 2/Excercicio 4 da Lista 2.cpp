#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
4.Desenvolva um programa que verifique se o ano dado é bissexto.
* Os anos bissextos são múltiplos de 4, não múltiplos de 100 (1900 não é bissexto) e
múltiplos de 400 (2000 é bissexto).
*/

main(){
setlocale(LC_ALL, "portuguese");
int ano;

	printf("Digite um ano : ");
	scanf("%i", &ano);
	if(ano % 4 == 0 && ano % 100 !=0 || ano%400==0)
	{
		printf("O ano é bissexto");
	}
	else
	{
		printf("O ano nao é bissexto");
	}
getch ();	
//system("pause");	
}
