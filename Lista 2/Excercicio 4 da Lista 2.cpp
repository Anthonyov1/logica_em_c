#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
4.Desenvolva um programa que verifique se o ano dado � bissexto.
* Os anos bissextos s�o m�ltiplos de 4, n�o m�ltiplos de 100 (1900 n�o � bissexto) e
m�ltiplos de 400 (2000 � bissexto).
*/

main(){
setlocale(LC_ALL, "portuguese");
int ano;

	printf("Digite um ano : ");
	scanf("%i", &ano);
	if(ano % 4 == 0 && ano % 100 !=0 || ano%400==0)
	{
		printf("O ano � bissexto");
	}
	else
	{
		printf("O ano nao � bissexto");
	}
getch ();	
//system("pause");	
}
