#include<stdio.h>
#include<locale.h>
/*
1.Faça um algoritmo que leia um número inteiro e mostre uma mensagem 
indicando se este número é par ou ímpar, e se é positivo ou negativo
*/
int main(){
	setlocale(LC_ALL,"");
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%i",&num);
    printf("O número digitado é : ");
    
	// verificando se positivo , negativo ou nulo
    if(num>0){
       printf("Positivo");
    }else if (num<0){
    	   printf("Negativo");
    }else{
    	printf("NULO!");
	}
    
	// verificando se é par ou impar
	if(num%2==0) printf (" e é PAR");
    else printf(" e é ímpar");	

   	
	return 0;
}
