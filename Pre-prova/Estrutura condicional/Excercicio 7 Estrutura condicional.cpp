#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>
/*
Excercicio 7 Estrutura condicional
Faça um programa em C que receba a idade de uma pessoa e mostre mensagem
informando “maior de idade” ou “menor de idade”. Considere a idade a partir de 18
anos como maior de idade.
*/
main(){
	setlocale(LC_ALL, "portuguese");
	int idade; 
	
	printf("Digite uma idade: ");
	scanf("%i", &idade);
	if(idade >= 0 && idade <= 17){
		printf("Você é menoridade!");
		}else
			if(idade >= 18){
				printf("Você é maioridade!");
			}

getch ();
}
