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
Excercicio de refor�o 2:
Fa�a um algoritmo que receba dois n�meros e execute as opera��es listadas a seguir, de
acordo com a escolha do usu�rio. 
M-M�DIA ENTRE OS N�MEROS DIGITADOS 
S-DIFEREN�A DO MAIOR PELO MENOR
P-PRODUTO ENTRE OS N�MEROS DIGITADOS 
D-DIVIS�O DO PRIMEIRO PELO SEGUNDO
*/

main(){
	setlocale(LC_ALL, "portuguese");
	int v1, v2;
	char operacao;
	
	printf("Escolha a opera��o desejada[M - MEDIA, S - DIFEREN�A, P - PRODUTO, D - DIVIS�O]: ");
	scanf("%c", &operacao);
	printf("Digite o primeiro valor: ");
	scanf("%f", &v1);
	printf("Digite o segundo valor: ");
	scanf("%f", &v2);
	switch(operacao){
		case 'M': printf("A media entre os numeros digitados � %i", (v1 + v2)/2);
		break;
		case 'S': 
			if(v1 > v2){
				printf("A diferen�a entre o maior valor pelo menor valor � %i", v1 - v2);
}	         else{
					printf("A diferen�a entre o maior valor pelo menor valor � %i", v2 - v1);
	}
		break;
		case 'P': printf("O produto entre os n�meros digitados � %i",v1 % v2);
		break;
		case 'D': printf("A divis�o do primerio valor pelo segundo valor � de %i", v1/v2);
		break;
		}
getch ();
}
