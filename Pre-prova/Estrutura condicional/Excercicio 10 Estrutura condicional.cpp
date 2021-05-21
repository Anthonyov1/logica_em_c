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
Excercicio 9 Estrutura condicional:
 Uma empresa decidiu dar um aumento escalonado a seus funcionários de acordo
com a seguinte regra:
- 13% para os salários inferiores ou iguais a R$ 1.000,00;
- 11% para os salários inferiores ou iguais a R$ 1.500,00;
- 9 % para os salários inferiores ou iguais a R$ 2.000,00;
- 7% para os demais salários.
Faça um programa em C que receba o salário atual de um funcionário e apresente
o valor do salário atual, o valor do aumento e o valor do novo salário. 
*/
main(){
	setlocale(LC_ALL, "portuguese");
	float salario;
	
	printf("Digite o salario do funcionario:R$");
	scanf("%f", &salario);
	if(salario <= 1000){
		printf("O salario atual do funcionario é R$%.2f, recebendo de aumento R$%.2f, ficando R$%.2f", salario, salario*13/100, salario+(salario*13/100));
	}else
		if(salario > 1000 && salario <= 1500){
			printf("O salario atual do funcionario é R$%.2f, recebendo de aumento R$%.2f, ficando R$%.2f", salario, salario*11/100, salario+(salario*11/100));	
		}else
			if(salario > 1500 && salario <= 2000){
				printf("O salario atual do funcionario é R$%.2f, recebendo de aumento R$%.2f, ficando R$%.2f", salario, salario*9/100, salario+(salario*9/100));
			}else
				if(salario > 2000){
					printf("O salario atual do funcionario é R$%.2f, recebendo de aumento R$%.2f, ficando R$%.2f", salario, salario*7/100, salario+(salario*7/100));
				}

getch ();
}
