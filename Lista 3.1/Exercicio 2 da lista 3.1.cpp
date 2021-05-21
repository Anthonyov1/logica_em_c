#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
2.Suponha que você atrasou uma conta. A cada mês que você deixa de pagar, será cobrado
1% de juros no valor inicial. Ou seja, se você atrasar um mês, irá pagar 1%. Se atrasar 3
meses, irá pagar 3% etc. Vamos supor que você pode atrasar, no máximo, 5 meses.
O programa pede, como entrada, dois valores:
O valor de sua dívida inicial e a quantidade de meses de atraso (no máximo 5). Faça um
programa em C que calcula os juros de atraso. Use switch e case acumulados. É permitida
a utilização de SOMENTE 1 COMANDO BREAK.
*/

main(){
	setlocale(LC_ALL, "portuguese");
	float divida;
	int atraso;
	
	printf("Digite a sua divida: ");
	scanf("%f", &divida);
	printf("Quantos meses de atraso: ");
	scanf("%i", &atraso);
	switch(atraso){
		case 1 ... 5: printf("Devido ao seu atraso, sua divida nova devido o juros de atraso sera de: R$%.2f", divida + (divida * atraso)/100);
	break;
	}
getch ();
}
