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
8.Crie um algoritmo que leia um vetor de 20 posi��es e informe:
a) Quantos n�meros pares existem no vetor
b) Quantos n�meros �mpares existem no vetor
c) Quantos n�meros maiores do que 50
d) Quantos n�meros menores do que 7 
*/

#define tam 20
main(){
	setlocale(LC_ALL, "portuguese");
	int vet[tam], x = 0, somapar = 0, somaimpar = 0, maiorque50 = 0, menorque7 = 0;
	
	printf("Queremos saber quantos...\n");
	printf("a) N�meros pares existem no seus vetores?\n");
	printf("b) N�meros �mpares existem no seus vetores?\n");
	printf("c) N�meros maiores do que 50 no seus vetores?\n");
	printf("d) N�meros menores do que 7 no seus vetores?\n");
	printf("\n Agora preencha os vetores \n");
	for(x = 0; x < tam; x++){
		printf("Informe o valor para a posi��o %i do vetor: ", x + 1);
		scanf("%i", &vet[x]); 
		                   
	vet[x]%2==0 ? somapar++ : somaimpar++;
	
		if (vet[x] > 50) maiorque50++;
		if(vet[x] < 7) menorque7++;
}
	printf("Possui %i numeros pares nos vetores.\n", somapar);
	printf("Possui %i numeros impares nos vetores.\n", somaimpar);
	printf("Possui %i numeros maiores que 50 nos vetores.\n", maiorque50);
	printf("Possui %i numeros menores que 7 nos vetores.\n", menorque7);
	
getch ();
}
