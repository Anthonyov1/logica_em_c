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
Excercicio de reforço 4
 Um funcionário receberá aumento de acordo com o seu plano de trabalho. Faça um
algoritmo que leia o plano de trabalho e o salário atual de um funcionário e calcule e imprima
o seu novo salário.
A = 10%
B = 15%
C = 20%
*/

main(){
	setlocale(LC_ALL, "portuguese");
	float salario;
	char plano;
	
	printf("Qual o plano de trabalho desse funcionario? ");
	scanf("%c", &plano);
	printf("Qual é o salario do funcionario? R$");
	scanf("%f", &salario);
	switch(plano){
		case 'A':	printf("O salario do funcionario de plano A agora sera de R$%.2f", salario + (salario * 10)/100);
		break;
		case 'B':	printf("O salario do funcionario de plano B agora sera de R$%.2f", salario + (salario * 15)/100);
		break;
		case 'c':	printf("O salario do funcionario de plano C agora sera de R$%.2f", salario + (salario * 20)/100);
		break;
	}


getch ();
}
