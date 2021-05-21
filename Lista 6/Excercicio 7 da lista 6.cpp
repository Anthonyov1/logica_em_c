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
7.Escreva um vetor de 5 posições, crie um novo vetor, também de 5 posições e insira os
valores do primeiro vetor no segundo vetor em ordem inversa e mostre os dois
vetores no final. 
*/

#define tam 5
main(){
	setlocale(LC_ALL, "portuguese");
	int vet1[tam], vet2[tam], x = 0, y = 0;
	
	printf("\n Preencha o vetor: \n");
	for(x = 0; x < tam; x++){
		printf("\nInforme um valor para a posição %i do vetor: ", x);
		scanf("%i", &vet1[x]);
	}
	
	for(x = tam - 1; x >= 0; x--){
		vet2[y] = vet1[x];
		y++;
	}
	
	for(x = 0; x < tam; x++){
		printf("%3i", vet1[x]);
	}
	printf("\n\n");	
	for(x = 0; x < tam; x++){
		printf("%3i", vet2[x]);
	}

getch ();
}
