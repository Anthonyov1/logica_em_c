#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
2.Suponha que voc� atrasou uma conta. A cada m�s que voc� deixa de pagar, ser� cobrado
1% de juros no valor inicial. Ou seja, se voc� atrasar um m�s, ir� pagar 1%. Se atrasar 3
meses, ir� pagar 3% etc. Vamos supor que voc� pode atrasar, no m�ximo, 5 meses.
O programa pede, como entrada, dois valores:
O valor de sua d�vida inicial e a quantidade de meses de atraso (no m�ximo 5). Fa�a um
programa em C que calcula os juros de atraso. Use switch e case acumulados. � permitida
a utiliza��o de SOMENTE 1 COMANDO BREAK.
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
