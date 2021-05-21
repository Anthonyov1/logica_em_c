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
2.Faça um algoritmo que imprima os múltiplos positivos de 7, inferiores a 1000
*/

main(){
	setlocale(LC_ALL, "portuguese");
	int i=0;
	for(i=1;i<=1000;i++){
		if(i%7==0)
		printf("Os multiplos positvos de 7 e menor que 1000 é: %i\n",i);
	}


getch ();
}
