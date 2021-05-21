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
Excercicio 6 Estrutura condicional:
Faça um programa em C que leia a velocidade máxima permitida em uma avenida
e a velocidade com que o motorista estava dirigindo nela. Calcule e mostre a multa
que uma pessoa vai receber, sabendo que são pagos: R$ 50 reais se o motorista
ultrapassar em até 10km/h a velocidade permitida; R$ 100 reais, se o motorista
ultrapassar de 11 a 30 km/h a velocidade permitida; e R$ 200 reais, se estiver
acima de 31km/h da velocidade permitida. 
*/
main(){
	setlocale(LC_ALL, "portuguese");
	int limite, motorista, ultrapassagem;
	
	printf("Digite a velocidade permitida da avenida km/h: ");
	scanf("%i", &limite);
	printf("Digite a velocidade do motorista: ");
	scanf("%i", &motorista);
	ultrapassagem = motorista - limite;
	if(ultrapassagem == 10){
		printf("O motorista tera que pagar uma multa de R$50!");
	}else
			if(ultrapassagem >= 11 && ultrapassagem <= 30){
				printf("O motorista tera que pagar uma multa de R$100!");
			}else
				if(ultrapassagem >= 31){
				printf("O motorista tera que pagar uma multa de R$200!");
			}

getch ();
}
