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
Fa�a um programa em C em que o usu�rio digita um valor e caso o valor informado
seja positivo, mostre a mensagem �O valor digitado � positivo�. 
*/
main(){
	setlocale(LC_ALL, "portuguese");
	int valor;
	
	printf("Digite um valor positivo: ");
	scanf("%i", &valor);
	if(valor >= 0){
		printf("O valor %i � positivo!", valor);
	}else{
		printf("O valor %i � negativo!", valor);
	}

getch ();
}
