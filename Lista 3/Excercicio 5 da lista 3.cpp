#include<stdio.h>
#include<ctype.h>
#include<locale.h>

/*
5.O peso ideal de um homem pode ser calculado pela fórmula PIH = 0,727*h - 57 e o de uma mulher pela fórmula PIM = 0,621*h - 44, 
onde a altura (h) é dada em centímetros. Escrever um algoritmo que lê o nome, o sexo, a altura e o peso de uma pessoa e 
que fornece, como saída, uma das três mensagens:

Você necessita emagrecer "x" quilos; 
Você está no peso ideal; 
Você pode aumentar o seu peso em até "x" quilos, onde "x" é a diferença do peso da pessoa e seu peso ideal.
*/
int main(){
	setlocale(LC_ALL,"");
    float h,peso,pesoideal;
    char nome[50];
    char sexo;
    
    printf("Digite o nome ==> ");
    gets(nome);
    printf("Informe o sexo: M - Masculino, F - Feminino  ==> ");
    scanf("%c",&sexo);
    printf("Informe a altura em centímetros  ==> ");
    scanf("%f",&h);
    printf("Informe o peso  ==> ");
    scanf("%f",&peso);
	if(toupper(sexo)=='M'){
		pesoideal = 0.727*h - 57;
	}else{
		pesoideal = 0.621*h - 44;
	}
	if(peso<pesoideal){
		printf("%s, você precisa aumentar seu peso em %.2f quilos",nome,pesoideal-peso);
	}else if(peso>pesoideal){
		printf("%s, você precisa emagrecer  %.2f quilos",nome,peso-pesoideal);
	}else{
		printf("%s, você está no peso ideal",nome);	
	}
	
	
	
	;
	return 0;
}
