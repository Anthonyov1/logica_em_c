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
3.Faça um programa em C que leia um vetor de 10 posições de inteiros e mostre a(s)
posição(ões) onde se encontram os números pares. 
*/

#define tam 10
main(){
	setlocale(LC_ALL, "portuguese");
	int numero[tam], x = 0, impares = 0, pares = 0;
	
	for(x = 0; x < tam ; x++){
		printf("Digite o %i valor: ", x);
		scanf("%i", &numero[x]);
	}
		printf("\nPosições dos números pares:\n");
		for(x = 0; x < tam; x++){
		if(numero[x]%2==0)
			printf("%3i ", x);
	}
getch ();
}
