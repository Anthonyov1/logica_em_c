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
5.Faça um programa em C que leia dois vetores de 10 posições e faça a soma dos elementos
de mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante. 
*/

#define tam 10
main(){
	setlocale(LC_ALL, "portuguese");
	int vet1[tam], vet2[tam], vet3[tam], x = 0;
	
	printf("\n Preencha o primeiro vetor: \n");
	for(x=0; x<tam; x++){
		printf("\nInforme um valor para a posição %i do vetor: ", x);
		scanf("%i", &vet1[x]);
	}
	printf("\n Preencha o segundo vetor: /n");
		for(x=0; x<tam; x++){
		printf("\nInforme um valor para a posição %i: ", x );
		scanf("%i", &vet2[x]);
		vet3[x] = vet1[x] + vet2[x];
	}
		printf("\nVetor resultante:\n");
		for(x = 0; x < tam; x++){
			printf("%4d", vet3[x]);
		}
	
getch ();
}
