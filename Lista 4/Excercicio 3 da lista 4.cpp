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
3.Faça um programa que leia o código dos produtos pedidos e as quantidades desejadas;
calcule e mostre o valor a ser pago por produto (preço * quantidade) e o total do pedido.
Considere que o cliente deve informar quando o pedido deve ser encerrado.
FAÇA COM DO .....WHILE 
*/

int main(){
	setlocale(LC_ALL, "portuguese");
	int Codigos;
	float Cq = 0,  H = 0,  Cb = 0,  Ecb = 0,  Refrigerante = 0;
	
	printf("PRODUTOS ---  CODIGOS --- PREÇOS\n");
	printf("Cachorro quente [1]      R$1,50\n");
	printf("Hamburguer      [2]      R$2,00\n");
	printf("Cheeseburguer    [3]      R$2,50\n");
	printf("Eggcheeseburguer [4]      R$3,00\n");
	printf("Refrigerante    [5]      R$1,50\n");
	printf("---------------------------------\n");
	do{
		printf("Digite o codigo do pedido: ");
		scanf("%i", &Codigos);
		switch(Codigos){
			case 0:
				printf("Nao desejo mais nada.\n");
			break;
			case 1:
				printf("Um Cachorro quente por favor.\n\n");
				Cq++;
			break;
			case 2:
				printf("Um Hamburguer por favor.\n\n");
				H++;
			break;
			case 3: 
				printf("Um Cheeseburguer por favor.\n\n");
				Cb++;
			break;
			case 4:
				printf("Um Eggcheeseburguer por favor.\n\n");
				Ecb++;
			break;
			case 5:
				printf("Um refrigerante por favor.\n\n");
				Refrigerante++;
			break;		
		}
	} while(Codigos != 0); 
	printf("\n\nVocé comprou %.0f Produtos e gastou o total de R$%.2f", Cq + H + Cb + Ecb + Refrigerante ,(Cq * 1.50) + (H * 2.00) + (Cb * 2.50) + (Ecb * 3.00) + (Refrigerante * 1.50));
	
getch ();
}
