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
Excercicio 3 Estrutura condicional
Fa�a um programa em C onde o usu�rio informe a nota de uma aluno (de 0 a100)
e ele exiba a mensagem conforme a nota:
? Nota >= 60: mensagem de Aprovado
? Nota >= 20:mensagem de Recupera��o
? Nota de zero a 19: mensagem de Reprovado 
*/
main(){
	setlocale(LC_ALL, "portuguese");
	int nota;
	
	printf("Qual foi a nota do aluno? ");
	scanf("%i", &nota);
	if(nota >= 60){
		printf("Aluno aprovado!");
	}else
		if(nota >= 20 && nota <= 59){
			printf("Aluno em recupera��o!");
		}else
			if(nota >= 0 && nota <= 19){
				printf("Aluno reprovado!");
			}

getch ();
}
