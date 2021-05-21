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
3.Escreva um algoritmo que determine o fatorial de um número. 
Para este problema, tem-se  como entrada o valor do número do qual se deseja calcular o fatorial. 
O fatorial de 0 é  igual a 1. O fatorial de um número N(N!) é definido conforme a seguir: 
N! = 1 * 2 * 3 * 4 * ... * (N-1) * N
*/

main(){
	setlocale(LC_ALL, "portuguese");
	int num = 0,x = 0,fat = 1;
	
	printf("Digite um numero para o calculo fatorial: ");
	scanf("%i", &num);
	for(x = 1;x <= num; x++){
		fat=(fat*x);
	}
	printf("\nfatorial de %i é ==> %i", num,fat);


getch ();
}
