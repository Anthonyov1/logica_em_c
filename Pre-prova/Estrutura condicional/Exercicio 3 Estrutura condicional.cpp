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
Faça um programa em C onde o usuário informe a nota de uma aluno (de 0 a100)
e ele exiba a mensagem conforme a nota:
? Nota >= 60: mensagem de Aprovado
? Nota >= 20:mensagem de Recuperação
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
			printf("Aluno em recuperação!");
		}else
			if(nota >= 0 && nota <= 19){
				printf("Aluno reprovado!");
			}

getch ();
}
