#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

main(){
setlocale(LC_ALL, "portuguese");
int idade;
	
	printf("Qual a sua idade : ");
	scanf("%i", &idade);
	if(idade >= 18)
	{
		printf("Voce é maioridade");
	}
	else
	{
		printf("voce é minoridade");
	}


getch ();
}
