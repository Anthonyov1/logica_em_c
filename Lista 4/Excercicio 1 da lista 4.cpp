#include <stdio.h>
#include <conio.h>
#include <locale.h>

/*
1.Chico tem 1,50 metros e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metros e
cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos
anos serão necessários para que Zé seja maior que Chico. (feito como exemplo)
*/

main(){
	
	setlocale(LC_ALL, "portuguese");
	float ze = 1.10, chico = 1.50;
	int ano = 0;
	while(ze < chico){
	chico+= 0.02;
	ze+= 0.03;
	ano++;
	}
	printf("Demorou %i anos para ze ser maior que chico", ano);
getch ();
}
