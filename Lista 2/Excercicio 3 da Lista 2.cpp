#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
3.Desenvolva um programa que efetue a leitura de dois valores inteiros e apresente a
diferen�a entre o maior e o menor. (obs.: n�o sabemos a ordem em que ser�o digitados, o
maior pode ser tanto o primeiro quanto o segundo). 

*/

main(){
setlocale(LC_ALL, "portuguese");
int v1, v2, vm;

	printf("digite o primeiro valor : ");
	scanf("%i", &v1);
	printf("digite o segundo valor : ");
	scanf("%i", &v2);
	if (v1 > v2)
	{
		vm = v1 - v2;
		printf("A diferen�a entre os dois � : %i", vm);	
	}
	else
	{
		vm = v2 - v1;
		printf("A diferen�a entre os dois � : %i", vm);
	}
	
getch ();
//system("pause");
}
