#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

/*
1.A partir da idade informada de uma pessoa, desenvolva um programa que informe a sua
classe eleitoral, sabendo que menores de 16 n�o votam (n�o votante), que o voto �
obrigat�rio para adultos entre 18 e 65 (eleitor obrigat�rio) e que o voto � opcional para
eleitores entre 16 e 18, ou maiores de 65 (eleitor facultativo).
*/

int main(){
setlocale(LC_ALL, "portuguese");
int idade;
	
	printf(" Digite sua idade : ");
	scanf("%i", &idade);
	if(idade<16)
	{
		printf("\nn�o votante\n ");
	} 
	else
	if  (idade >= 18 && idade <= 65) 
	{
		printf(" Voto obrigatorio ");
	}
	else
	if (idade >= 16 || idade <= 18 || idade > 65)
	{
		printf(" Voto facultativo ");
	}
	
getch ();
//system("pause")
}
