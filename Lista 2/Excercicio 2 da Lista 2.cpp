#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
2.Uma empresa decidiu dar um aumento escalonado a seus funcion�rios de acordo com a
seguinte regra: 13% para os sal�rios inferiores ou iguais a R$ 200,00; 11% para os
sal�rios situados entre R$ 200,0 e R$ 400,00 (inclusive); 9 % para os sal�rios entre R$
400,00 e R$ 800,00 (inclusive) e 7% para os demais sal�rios. Desenvolva um programa
que receba o sal�rio atual de um funcion�rio e forne�a o valor do seu novo sal�rio.
*/

main(){
setlocale(LC_ALL, "portuguese");
float sal, sal_novo;
	
	printf("Salario do fucionario :R$");
	scanf("%f", &sal);
	if (sal <= 200)
	{
		printf("aumento de 13 porcento\n\n");
		sal_novo=sal + (sal*13/100);
		printf("o salario agora � :R$%.2f", sal_novo);
	}
	else
	if (sal > 200  && sal <= 400)
	{
		printf("aumento de 11 porcento\n\n");
		sal_novo=sal + (sal*11/100);
		printf("o salario agora � :R$%.2f", sal_novo);
	}
	else
	if(sal > 400 && sal <= 800)
	{
		printf("aumento de 9 porcento\n\n");
		sal_novo=sal + (sal*9/100);
		printf("o salario agora � :R$%.2f", sal_novo);
	}
	else
	{
		printf("aumento de 7 porcento\n\n");
		sal_novo=sal + (sal*7/100);
		printf("o salario agora � :R$%.2f", sal_novo);
	}	  

getch ();
//system("pause");
}
