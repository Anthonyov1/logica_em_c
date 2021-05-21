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
 Faça um programa em C que receba o valor da venda, escolha a condição de
pagamento em um menu e mostre o valor total da venda final conforme condições a
seguir:
1 - Venda a Vista - desconto de 10%
2 - Venda a Prazo 30 dias - desconto de 5%
3 - Venda a Prazo 60 dias - mesmo preço
4 - Venda a Prazo 90 dias - acréscimo de 5%
5 - Venda com cartão de débito - desconto de 8%
6 - Venda com cartão de crédito - desconto de 7%
*/

main(){
	setlocale(LC_ALL, "portuguese");
	float valor;
	char pag;
	
	printf("Escolha a forma de pagamento por favor");
	printf("\n[v = venda a vista 10 porcento de desconto]");
	printf("\n[3 = 30 dias de prazo, 5 porcento de desconto]");
	printf("\n[6 = 60 dias de prazo, mesmo preço]");
	printf("\n[9 = 90 dias de prazo, 5 porcento de acréscimo]");
	printf("\n[d = cartão de débito, 8 porcento de desconto]");
	printf("\n[c = cartão de crédito, 7 porcento de desconto]");
	printf("\n:");
	scanf("%c", &pag);
	printf("Qual é o valor da venda? R$");
	scanf("%f", &valor);
	if(pag == 'v' || pag == '3' || pag == '6' || pag == '9' || pag == 'd' || pag == 'c'){
		switch(pag){
			case 'v': printf("O valor da venda então ficou: R$%.2f", valor - valor / 10);
			break;
			case '3': printf("O valor da venda então ficou: R$%.2f", valor - valor / 5);
			break;
			case '6': printf("O valor da venda então ficou: R$%.2f", valor);
			break;
			case '9': printf("O valor da venda então ficou: R$%.2f", (valor * 5) / 100 + valor);
			break;
			case 'd': printf("O valor da venda então ficou: R$%.2f", valor - valor / 8);
			break;
			case 'c': printf("O valor da venda então ficou: R$%.2f", valor - valor / 7);
			break;
		} 
	} else {
			printf("Essa forma de pagamento não existe senhor.");
		}

getch ();
}
