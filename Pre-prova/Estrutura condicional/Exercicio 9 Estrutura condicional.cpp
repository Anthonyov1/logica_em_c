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
Excercicio 9 Estrutura condicional:
Fa�a um programa em C que receba duas notas (n1 e n2) e mostre o valor da
m�dia que � calculada da seguinte forma: media = (n1* 2 + n2 * 3) / 5
Al�m disso, mostre a situa��o do aluno (aprovado, recupera��o ou reprovado). Se
a m�dia for maior ou igual a 6, o aluno est� aprovado por m�dia; se for menor que
e maior ou igual a 2, o aluno est� em recupera��o; se for menor que 2, o aluno
est� reprovado.
*/ 
main(){
	setlocale(LC_ALL, "portuguese");
	float nota1, nota2, media;
	
	printf("Digite a nota 1 do aluno: ");
	scanf("%f", &nota1);
	printf("Digite a nota 2 do aluno: ");
	scanf("%f", &nota2);
	media = (nota1 * 2 + nota2 * 3) / 5;
	if(media >= 6){
		printf("Aluno aprovado!");
	}else
		if(media >= 2 && media < 6){
			printf("Aluno em recupera��o!");
		}else
			if(media >= 0 && media < 2){
				printf("Aluno reprovado!");
			}
getch ();
}
