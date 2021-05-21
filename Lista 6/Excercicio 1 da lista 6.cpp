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
1.Faça um programa em C que armazene em um vetor a idade de 5 pessoas. Em seguida,
informe a idade da pessoa nas posições 0, 3 e 4 do vetor. 
*/

#define tam 5
main(){
	setlocale(LC_ALL, "portuguese");
	int idade[tam], x = 0;
	
	for(x = 0; x<tam; x++ ){
		printf("Informe a idade: ==> ", x);
		scanf("%i", &idade[x]);
	}
	printf("\nPessoa na posição 0: %i", idade[0]);
	printf("\nPessoa na posição 3: %i", idade[3]);
	printf("\nPessoa na posição 4: %i", idade[4]);
getch ();
}
