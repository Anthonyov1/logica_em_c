#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
4.Ler 4 valores (N1, N2, N3 e N4) referentes às quatro notas de um aluno. A seguir, se
a média ponderada com pesos 2,3,4 e 1, para as respectivas provas, for maior ou igual
a 7,0, mostre uma mensagem: "Aluno foi aprovado". Se a nota for inferior a 3,5, mostrar
uma mensagem: "Aluno foi reprovado". Se a média ficou maior que 3,5 e menor que
7,0, fazer a leitura de uma variável (G2) correspondente a nota de G2 e mostrar se o
aluno foi ou não aprovado (se a nota do G2 for maior ou igual a 6,0). 
*/

main(){
	setlocale(LC_ALL, "portuguese");
	float N1, N2, N3, N4, G1;
	
	printf("Digite a N1: \n");
	scanf("%f", &N1);
	printf("Digite o N2: \n");
	scanf("%f", &N2);
	printf("Digite o N3: \n");
	scanf("%f", &N3);
	printf("Digite o N4: \n");
	scanf("%f", &N4);
	G1 = ((N1*2) + (N2*3) + (N3*4) + (N4*1))/10;
	if(G1 < 3.5){
		printf("Aluno reprovado.");
	}else if(G1 >= 3.5 && G1 <= 7){
			printf("Aluno em recuperação:");
	}else{
		printf("Aluno aprovado.");
	}
	
	

getch ();
}
