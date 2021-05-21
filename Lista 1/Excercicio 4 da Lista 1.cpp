#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

//4.Desenvolva um programa em C que exibe a idade em dias de uma pessoa.

main(){
setlocale(LC_ALL, "portuguese");
int idade, idade_dias;
	
	printf("Digite sua idade: ");
	scanf("%i", &idade);
    idade_dias = idade*360;
	printf("sua idade em dias é: %i", idade_dias);
    
getch(); 	
//system("pause");
}
