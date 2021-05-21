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
Excercicio de reforço 2:
Faça um algoritmo que receba dois números e execute as operações listadas a seguir, de
acordo com a escolha do usuário. 
M-MÉDIA ENTRE OS NÚMEROS DIGITADOS 
S-DIFERENÇA DO MAIOR PELO MENOR
P-PRODUTO ENTRE OS NÚMEROS DIGITADOS 
D-DIVISÃO DO PRIMEIRO PELO SEGUNDO
*/

main(){
	setlocale(LC_ALL, "portuguese");
	int v1, v2;
	char operacao;
	
	printf("Escolha a operação desejada[M - MEDIA, S - DIFERENÇA, P - PRODUTO, D - DIVISÃO]: ");
	scanf("%c", &operacao);
	printf("Digite o primeiro valor: ");
	scanf("%f", &v1);
	printf("Digite o segundo valor: ");
	scanf("%f", &v2);
	switch(operacao){
		case 'M': printf("A media entre os numeros digitados é %i", (v1 + v2)/2);
		break;
		case 'S': 
			if(v1 > v2){
				printf("A diferença entre o maior valor pelo menor valor é %i", v1 - v2);
}	         else{
					printf("A diferença entre o maior valor pelo menor valor é %i", v2 - v1);
	}
		break;
		case 'P': printf("O produto entre os números digitados é %i",v1 % v2);
		break;
		case 'D': printf("A divisão do primerio valor pelo segundo valor é de %i", v1/v2);
		break;
		}
getch ();
}
