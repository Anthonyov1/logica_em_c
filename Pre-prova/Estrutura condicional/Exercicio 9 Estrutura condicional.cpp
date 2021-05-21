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
Faça um programa em C que receba duas notas (n1 e n2) e mostre o valor da
média que é calculada da seguinte forma: media = (n1* 2 + n2 * 3) / 5
Além disso, mostre a situação do aluno (aprovado, recuperação ou reprovado). Se
a média for maior ou igual a 6, o aluno está aprovado por média; se for menor que
e maior ou igual a 2, o aluno está em recuperação; se for menor que 2, o aluno
está reprovado.
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
			printf("Aluno em recuperação!");
		}else
			if(media >= 0 && media < 2){
				printf("Aluno reprovado!");
			}
getch ();
}
