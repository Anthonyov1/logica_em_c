#include<stdio.h>
#include<ctype.h>
#include<locale.h>

/*
5.O peso ideal de um homem pode ser calculado pela f�rmula PIH = 0,727*h - 57 e o de uma mulher pela f�rmula PIM = 0,621*h - 44, 
onde a altura (h) � dada em cent�metros. Escrever um algoritmo que l� o nome, o sexo, a altura e o peso de uma pessoa e 
que fornece, como sa�da, uma das tr�s mensagens:

Voc� necessita emagrecer "x" quilos; 
Voc� est� no peso ideal; 
Voc� pode aumentar o seu peso em at� "x" quilos, onde "x" � a diferen�a do peso da pessoa e seu peso ideal.
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
    printf("Informe a altura em cent�metros  ==> ");
    scanf("%f",&h);
    printf("Informe o peso  ==> ");
    scanf("%f",&peso);
	if(toupper(sexo)=='M'){
		pesoideal = 0.727*h - 57;
	}else{
		pesoideal = 0.621*h - 44;
	}
	if(peso<pesoideal){
		printf("%s, voc� precisa aumentar seu peso em %.2f quilos",nome,pesoideal-peso);
	}else if(peso>pesoideal){
		printf("%s, voc� precisa emagrecer  %.2f quilos",nome,peso-pesoideal);
	}else{
		printf("%s, voc� est� no peso ideal",nome);	
	}
	
	
	
	;
	return 0;
}
