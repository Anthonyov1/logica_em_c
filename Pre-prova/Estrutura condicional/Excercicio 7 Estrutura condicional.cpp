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
Fa�a um programa em C que receba a idade de uma pessoa e mostre mensagem
informando �maior de idade� ou �menor de idade�. Considere a idade a partir de 18
anos como maior de idade.
*/
main(){
	setlocale(LC_ALL, "portuguese");
	int idade; 
	
	printf("Digite uma idade: ");
	scanf("%i", &idade);
	if(idade >= 0 && idade <= 17){
		printf("Voc� � menoridade!");
		}else
			if(idade >= 18){
				printf("Voc� � maioridade!");
			}

getch ();
}
