#include<stdio.h>
#include<locale.h>
/*
1.Fa�a um algoritmo que leia um n�mero inteiro e mostre uma mensagem 
indicando se este n�mero � par ou �mpar, e se � positivo ou negativo
*/
int main(){
	setlocale(LC_ALL,"");
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%i",&num);
    printf("O n�mero digitado � : ");
    
	// verificando se positivo , negativo ou nulo
    if(num>0){
       printf("Positivo");
    }else if (num<0){
    	   printf("Negativo");
    }else{
    	printf("NULO!");
	}
    
	// verificando se � par ou impar
	if(num%2==0) printf (" e � PAR");
    else printf(" e � �mpar");	

   	
	return 0;
}
