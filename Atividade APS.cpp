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
APS. O professor propõe o desenvolvimento de um (1) problema desafiador que envolva o uso de:
• entrada de dados e/ou geração de dados aleatórios;
• uma ou mais decisões;
• uma ou mais estruturas de repetição;
• validação de entrada de dados e/ou validação de dados gerados aleatórios;
• menu de opções;
• vetor;
O trabalho dever ser contextualizado e ter ao menos 4 regras/restrições a serem cumpridas. 
*/

#define tam 5
main(){
	setlocale(LC_ALL, "portuguese");
	int pessoas[tam], x = 0, sexo, olhos, cabelo, idade, MI = 0, AL = 0, maioridade = 0;
	char nome [100], outro[100];
	
	printf("ESTAMOS FAZENDO UM ESTUDOS COM PESSOAS PARA SABERMOS UM NICHO DE PESSOAS ESPECIFICAS, COM OS SEGUINTES REQUISITOS:\n");
	printf("( MASCULINO, IDADE DE 20 A 40 ANOS, OLHOS AZUIS, CABELO LOURO E A MAIS VELHA DELAS )\n\n");
	printf("UTILIZE OS NUMEROS QUE O PROGRAMA PEDE NAS PERGUNNTAS.!\n");
	for(x = 0; x < tam; x++){
		printf("==================\n");
		
		printf("\nO nome da pessoa da pessoa numero %i: ", x + 1);
		scanf("%s", &nome);
		
		printf("\nSeu sexo [m = 1/f = 2/outro = 3]: ");
		scanf("%i", &sexo);
		switch(sexo){
			case 1: printf("Masculino.\n");
			break;
			case 2: printf("Feminino.\n");
			break;
			case 3: printf("Diga qual por favor: ");
					scanf("%s", &outro);
		}
		
		printf("\nA cor do seus olhos [azul = 1, verde = 2, castanho = 3]: ");
		scanf("%i", &olhos);
		switch(olhos){
			case 1: printf("Azul.\n");
			break;
			case 2: printf("Verde.\n");
			break;
			case 3: printf("Castanho.\n");
			break;
		}
		
		printf("\nA cor do seu cabelo [louro = 1, castanho = 2, preto = 3, ruivo = 4, colorido = 5]: ");
		scanf("%i", &cabelo);
		switch(cabelo){
			case 1: printf("Louro.\n");
			break;
			case 2: printf("Castanho.\n");
			break;
			case 3: printf("Preto.\n");
			break;
			case 4: printf("Ruivo\n");
			break;
			case 5: printf("colorido\n");
	}
	
		printf("\nSua idade: ");
		scanf("%i", &idade);
	
		if(sexo == 1 && idade >= 20 && idade <= 40){
			MI++;
			printf("A pessoa na posição %i atende a este requisitos.\n", x + 1);
	} else{ printf("A pessoa na posição %i nao atende a estes requisitos.\n", x + 1);
	}
	
			if(olhos == 1 && cabelo == 1){
				AL++;
				printf("A pessoa na posição %i atende a este requisitos.\n", x + 1);
		}else{ printf("A pessoa na posição %i nao atende a estes requisitos.\n", x + 1);
		}
				
				if(idade > maioridade){
					maioridade = idade;
	}
}
	printf("==========   RESULTADO DA PESQUISA   ==============");
	printf("\n\nA maior idade entre as pessoas é: %i", maioridade);
	printf("\n\nA quantidade de pessoas do sexo masculino cuja idade está entre 20 a 40 anos é: %i", MI);
	printf("\n\nA quantidade de pessoas que tenham olhos azuis e cabelos louros: %i", AL);
	
getch ();
}
