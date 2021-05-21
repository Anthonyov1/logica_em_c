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
3.Faça um programa que lê uma matriz M (5,5) e calcule as somas: 
	da linha 3ª de M; 
	da coluna 4ª de M; 
	da diagonal principal; 
	da diagonal secundária; 
	de todos os elementos da matriz; 
Escreva estas somas e a matriz. 
*/

#define L 5
#define C 5
main(){
	setlocale(LC_ALL, "portuguese");
	int m[L][C], x = 0, y = 0, soma;
	
	for(x = 0; x < L; x++){
		for(y = 0; y < C; y++){
			printf("Digite o valor para posição [%i/%i] =", x, y);
			scanf("%i", &m[x][y]);
		}
	}
	for(x = 0; x < L; x++){
		printf("\n");
		for(y = 0; y < C; y++){
			printf("%4i", m[x][y]);
		}
	}
    for(x=0; x<L;x++){
        printf("\n");

        soma = 0;
        for(y=0;y<C;y++){
            soma = soma + m[x][y];
        }
        printf("Soma da linha %i: %d", x=y, soma);
    }


getch ();
}	
