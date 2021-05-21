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
Questão 1
Faça um programa em C que receba o valor da venda, escolha a condição de pagamento em um menu e mostre o valor total da venda final conforme condições a seguir:
1 - Venda a Vista - desconto de 10%

2 - Venda a Prazo 30 dias - desconto de 5%

3 - Venda a Prazo 60 dias - mesmo preço

4 - Venda a Prazo 90 dias - acréscimo de 5%

5 - Venda com cartão de débito - desconto de 8%

6 - Venda com cartão de crédito - desconto de 7%
*/
main(){
	setlocale(LC_ALL, "portuguese");
	float quantia;
	int codigos, pagamento;
	
	printf("PRODUTOS ---  CODIGOS --- PREÇOS\n");
	printf("Computador1     [1]      R$1000,00\n");
	printf("Computador2     [2]      R$3000,00\n");
	printf("computador3     [3]      R$6000,00\n");
	printf("---------------------------------\n");
	do{
		printf("Digite o codigo do pedido: ");
		scanf("%i", &codigos);
		switch(codigos){
			case 0: printf("Apenas este mesmo.\n");
			break;
			case 1: printf("O computador 1.\n\n");
				quantia = quantia + 1000;
			break;
			case 2: printf("O computador 2.\n\n");
				quantia = quantia + 2000;
			break;
			case 3: printf("O computador 3.\n\n");
				quantia = quantia + 5000;
			break;
				
		}
	} while(codigos != 0); 
	printf("========== FORMAS DE PAGAMENTO ==========\n");
	printf("[1 - A VISTA, DESCONTO DE 10%]\n");
	printf("[2 - PARCELA1 (30 DIAS), DESCONTO DE 5%]\n");
	printf("[3 - PARCELA2 (60 DIAS), NÃO TEM DESCONTO]\n");
	printf("[4 - PARCELA3 (90 DIAS), ACRESCIMO DE 5%]\n");
	printf("5 - DÉBITO, DESCONTO DE 8%\n");
	printf("6 - CRÉDITO, DESCONTO DE 7%\n");
	printf("=========================================\n");
	printf("Qual forma que o senhor ira pagar? ");
	scanf("%i", &pagamento);
	switch(pagamento){
		case 1: printf("10 porcento de desconto senhor!\n");
			quantia = quantia - (quantia*10/100);
		break;
		case 2: printf("5 porcento de desconto senhor!\n");
			quantia = quantia - (quantia*5/100);
		break;
		case 3: printf("Não possui desconto senhor!");
		break;
		case 4: printf("5 porcento de acrescimo senhor!\n");
			quantia = quantia + (quantia*5/100);
		break;
		case 5: printf("8% porcento de desconto senhor!\n");
			quantia = quantia - (quantia*8/100);
		break;
		case 6: printf("7 porcento de desconto senhor!\n");
			quantia = quantia - (quantia*7/100);
		break;
		
	}
	printf("O valor a se pagar é R$%.2f", quantia);

getch ();
}
