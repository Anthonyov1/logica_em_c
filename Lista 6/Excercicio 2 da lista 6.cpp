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
2.Fa�a um programa em C que armazene em um vetor 10 n�meros inteiros. Ap�s, exiba a
soma de posi��es com n�meros pares e a soma de posi��es com n�meros �mpares
constantes no vetor. 
*/

#define tam 10
main(){
	setlocale(LC_ALL, "portuguese");
	int numero[tam], x = 0, somapar = 0, somaimpar = 0;
	
	for(x = 0; x<tam; x++){
		printf("Informe um valor: ");
		scanf("%i", &numero[x]);
		if(numero[x]%2==0) somapar++;
		else somaimpar++;
	}
	printf("\nSoma dos pares: %i", somapar);
	printf("\nSoma dos impares: %i", somaimpar);
getch ();
}
