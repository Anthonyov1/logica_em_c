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
Quest�o 2
Fa�a um programa em C que receba o pre�o de custo e o pre�o de venda de 5 produtos. Mostre como resultado se houve lucro, 
preju�zo ou empate para cada produto. 
Ao final informe m�dia de pre�o de custo e do pre�o de venda.
*/
main(){
	setlocale(LC_ALL, "portuguese");
	float produto, venda, diferenca, tproduto, tvenda;
	int produtos;
	
	produtos = 0;
	tproduto = 0;
	tvenda = 0;
	
	while(produtos < 5){
		printf("Qual o valor deste produto?R$");
		scanf("%f", &produto);
		printf("Qual foi o valor da venda?R$");
		scanf("%f", &venda);
		diferenca = venda - produto;
		printf("A diferen�a desta venda foi de %.2f\n", diferenca);
		if(diferenca == 0){
			printf("EMPATE!\n");
		}else
			if(diferenca > 0){
				printf("LUCRO!\n");
			}else
				if(diferenca < 0){
					printf("PREJUIZO!\n");
				}
	produtos ++;
	}
	tproduto = tproduto + produto;
	tvenda = tvenda + venda;
	
	printf("A media de custo foi %.2f\n", tproduto/5 );
	printf("A media de venda foi %.2f\n", tvenda/5);
	
getch ();
}
