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
Exercicio 5 Comando de Repetição
 Faça um programa em C que imprima todos os números pares compreendidos
entre 85 e 907. O algoritmo deve também calcular e imprimir a soma destes
valores. 
*/

main(){
	setlocale(LC_ALL, "portuguese");
	int soma=0,i;
	
	for (i=86;i<=906;i=i+2) {
	printf ("%d\n",i);
	}
	for (i=86;i<=906;i++) {
	soma = soma + i;
	}
	printf("Soma: %d\n", soma);

getch ();
}
