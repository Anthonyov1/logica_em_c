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
1.Fa�a um programa em C que armazene em um vetor a idade de 5 pessoas. Em seguida,
informe a idade da pessoa nas posi��es 0, 3 e 4 do vetor. 
*/

#define tam 5
main(){
	setlocale(LC_ALL, "portuguese");
	int idade[tam], x = 0;
	
	for(x = 0; x<tam; x++ ){
		printf("Informe a idade: ==> ", x);
		scanf("%i", &idade[x]);
	}
	printf("\nPessoa na posi��o 0: %i", idade[0]);
	printf("\nPessoa na posi��o 3: %i", idade[3]);
	printf("\nPessoa na posi��o 4: %i", idade[4]);
getch ();
}
