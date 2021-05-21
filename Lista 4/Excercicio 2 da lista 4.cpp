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
2.Foi realizada uma pesquisa de algumas características físicas da população de uma certa
região, a qual coletaram os seguintes dados referentes a cada habitante para serem
analisados:
• sexo (masculino e feminino)
• cor dos olhos (azuis, verdes ou castanhos)
• cor dos cabelos (louros, castanhos, pretos)
• idade
Faça um algoritmo que determine e escreva:
• a maior idade dos habitantes;
• a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e
• 35 anos, inclusive;
• a quantidade de indivíduos que tenham olhos verdes e cabelos louros;
O final do conjunto de habitantes é reconhecido pelo valor 0 informado como
idade
*/

main(){
	setlocale(LC_ALL, "portuguese");
	int habitanteFI = 0, habitanteVL = 0, idade, maiorIdade = 0;
	char nome[100], sexo[100], olhos[100], cabelo[100];
	printf("===================\n");
	printf("Caso queira parar, digite '0' para a variavel 'idade'\n");
 	while (idade != 0){
		printf("==================\n");
		printf("\nSeu sexo [M/F]: ");
		scanf("%s", &sexo);
		printf("\nA cor do seus olhos [azul, verde, castanho]: ");
		scanf("%s", &olhos);
		printf("\nA cor do seu cabelo [louro, castanho, preto]: ");
		scanf("%s", &cabelo);
		printf("\nSua idade: ");
		scanf("%i", &idade);
	if(idade != 0){
		if(!strcmp(sexo, "F") && idade >= 18 && idade <= 35)
			habitanteFI++;
			if(!strcmp(olhos, "verde") && !strcmp(cabelo, "louro"))
				habitanteVL++;
				if(idade > maiorIdade)
					maiorIdade = idade;
	}
}
	printf("==========   RESULTADO DA PESQUISA   ==============");
	printf("\n\nA maior idade entre os habitantes é: %i", maiorIdade);
	printf("\n\nA quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos é: %i", habitanteFI);
	printf("\n\nA quantidade de indivíduos que tenham olhos verdes e cabelos louros: %i", habitanteVL);
getch ();
}
