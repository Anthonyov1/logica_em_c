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
Excercicio 2 Estrutura condicional:
Faça um programa em C em que o usuário digita um valor e caso o valor informado
seja positivo, mostre a mensagem “O valor digitado é positivo”. 
*/
main(){
	setlocale(LC_ALL, "portuguese");
	int valor;
	
	printf("Digite um valor positivo: ");
	scanf("%i", &valor);
	if(valor >= 0){
		printf("O valor %i é positivo!", valor);
	}else{
		printf("O valor %i é negativo!", valor);
	}

getch ();
}
