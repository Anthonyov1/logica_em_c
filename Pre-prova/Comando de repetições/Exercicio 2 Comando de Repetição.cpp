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
Exercicio 2 Comando de Repetição
Faça um programa em C onde o usuário digite o valor do veículo e o algoritmo
calcule o apresente o desconto, conforme segue:
 Veículos até de R$ 50.000,00 - desconto de 5%
 Veículos acima de R$ 50.000,00 - desconto de 2%
O algoritmo deve repetir o processo até o usuário digitar valor do veículo igual a zero, ou
seja, ao digitar zero, o algoritmo deve abortar a execução.
*/

main(){
	setlocale(LC_ALL, "portuguese");
	float valor;
	
	do {
		printf("\nInsira o preço do veículo que deseja comprar");
		printf("\n[Carro 1 = R$50000, 5 porcento de desconto]");
		printf("\n[Carro 2 = R$35000, 5 porcento de desconto]");
		printf("\n[Carro 3 = R$80000, 2 porcento de desconto]");
		printf("\n[Carro 4 = R$100000, 2 porcento de desconto]");
		printf("\n[Carro 5 = R$20000, 5 porcento de desconto]");
		printf("\nCaso queira parar de comprar, digite 0");
		printf("\n:");
		scanf("%f", &valor);
		if(valor <= 50000){
			printf("Você comprou um veiculo de R$%.2f e que ficou R$%.2f\n", valor, valor - valor * 5 / 100);			
		} else {
			printf("Você comprou um veiculo de R$%.2f e que ficou R$%.2f\n", valor, valor- valor * 2 / 100);
		}
	} while (valor != 0);

getch ();
}
