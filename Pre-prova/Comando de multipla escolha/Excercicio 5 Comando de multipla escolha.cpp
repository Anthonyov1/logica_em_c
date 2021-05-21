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
Excercicio 5 Comando de multipla escolha:
 Fa�a um programa em C que receba o valor da venda, escolha a condi��o de
pagamento em um menu e mostre o valor total da venda final conforme condi��es a
seguir:
1 - Venda a Vista - desconto de 10%
2 - Venda a Prazo 30 dias - desconto de 5%
3 - Venda a Prazo 60 dias - mesmo pre�o
4 - Venda a Prazo 90 dias - acr�scimo de 5%
5 - Venda com cart�o de d�bito - desconto de 8%
6 - Venda com cart�o de cr�dito - desconto de 7%
*/

main(){
	setlocale(LC_ALL, "portuguese");
	float valor;
	char pag;
	
	printf("Escolha a forma de pagamento por favor");
	printf("\n[v = venda a vista 10 porcento de desconto]");
	printf("\n[3 = 30 dias de prazo, 5 porcento de desconto]");
	printf("\n[6 = 60 dias de prazo, mesmo pre�o]");
	printf("\n[9 = 90 dias de prazo, 5 porcento de acr�scimo]");
	printf("\n[d = cart�o de d�bito, 8 porcento de desconto]");
	printf("\n[c = cart�o de cr�dito, 7 porcento de desconto]");
	printf("\n:");
	scanf("%c", &pag);
	printf("Qual � o valor da venda? R$");
	scanf("%f", &valor);
	if(pag == 'v' || pag == '3' || pag == '6' || pag == '9' || pag == 'd' || pag == 'c'){
		switch(pag){
			case 'v': printf("O valor da venda ent�o ficou: R$%.2f", valor - valor / 10);
			break;
			case '3': printf("O valor da venda ent�o ficou: R$%.2f", valor - valor / 5);
			break;
			case '6': printf("O valor da venda ent�o ficou: R$%.2f", valor);
			break;
			case '9': printf("O valor da venda ent�o ficou: R$%.2f", (valor * 5) / 100 + valor);
			break;
			case 'd': printf("O valor da venda ent�o ficou: R$%.2f", valor - valor / 8);
			break;
			case 'c': printf("O valor da venda ent�o ficou: R$%.2f", valor - valor / 7);
			break;
		} 
	} else {
			printf("Essa forma de pagamento n�o existe senhor.");
		}

getch ();
}
