#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
5.Desenvolva um programa que calcule um sal�rio informado acrescido de 15%. Mostre o
sal�rio atual e o novo sal�rio corrigido.
*/

main(){
setlocale(LC_ALL, "portuguese");
float sal, aumento;
	
	printf("Recebe : ");
	scanf("%f", &sal);
	aumento= sal + (sal*15/100);
	printf("ele recebia : %.2f", sal);
	printf(" e agora recebera: %.2f", aumento);
	
getch();	
//system("pause");
}

