#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <locale.h>

/*
2.Faça um programa leia uma matriz 3x3. Em seguida, exiba a soma dos elementos de cada uma das linhas;
*/

#define L 3
#define C 3
main(){
	setlocale(LC_ALL,"portuguese");
	
	int mat[L][C];
	int y=0, x=0;
    int soma;
	
	for(x=0;x<L;x++){
        for(y=0;y<C;y++){
            printf("Digite um valor para a posição [%i,%i] ==>",x,y);
            scanf("%i",&mat[x][y]);
        }
    } 
    for(x=0; x<L;x++){
        printf("\n");

        soma = 0;
        for(y=0;y<C;y++){
            soma = soma + mat[x][y];
        }
        printf("Soma da linha %i: %d", x, soma);
    }
getch();
}
