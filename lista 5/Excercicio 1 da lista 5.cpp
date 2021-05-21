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
1.Some os números de 1 a 100 e imprima o valor.
*/

main(){
	setlocale(LC_ALL, "portuguese");
	int soma=0, i = 0;
	
	for(i=1;i<=100;i++){
		soma = soma + i;
		printf("A soma entre os numeros é %i\n", soma);	
	}
	

getch ();
}
