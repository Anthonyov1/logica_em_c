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
Exercicio 1 Comando de Repetição
Faça um programa em C que leia o nome do usuário e escreva 10 vezes na tela o
nome digitado
*/

#define tam 10
main(){
	setlocale(LC_ALL, "portuguese");
	char nome[tam];
	int cont;
	
	printf("Digite seu nome: ");
	gets(nome);
	for(cont = 0; cont <= tam; cont++){
		 printf("%i = %s\n", cont+1, nome); 
	}

getch ();
}
