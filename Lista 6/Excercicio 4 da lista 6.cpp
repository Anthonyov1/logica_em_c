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
4.A partir do exerc�cio anterior, crie um novo vetor para armazenar as posi��es dos n�meros
pares do vetor. Exiba esse novo vetor. 
*/

#define tam 10
main(){
	setlocale(LC_ALL, "portuguese");
	int numero[tam],  posicoes[tam];
	int x = 0, y = 0;
	
	for(x = 0; x < tam ; x++){
		printf("Digite um numero: ");
		scanf("%i", &numero[x]);
		if(numero[x]%2==0){
			posicoes [y] = x;
			y++;
		}
	}
	printf("\nOs pares est�o nas seguintes posi��es: \n");
	for(x = 0; x < y; x++){
		printf("%2d", posicoes[x]);
	}
	
getch ();
}

