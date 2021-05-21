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
1.Faça um programa que leia uma matriz 3x3 e exiba a matriz preenchida.
*/

#define l 3
#define c 3
main(){
	setlocale(LC_ALL, "portuguese");
	int mat[l][c], y = 0, x = 0;
	
	//PREENCHE VALORES DA MATRIZ
	for(x = 0; x < l; x++){
		for(y = 0; y < c; y++){
			printf("DIGITE UM VALOR PARA A POSIÇÃO [%i,%i] ==>", x,y);
			scanf("%i", &mat[x][y]);
		}
	}
	//EXIBE VALORES DA MATRIZ
	for(x = 0; x < l; x++){
		printf("\n");
		for(y = 0; y < c; y++){
			printf("%4i", mat[x][y]);
		}
	}

getch ();
}
