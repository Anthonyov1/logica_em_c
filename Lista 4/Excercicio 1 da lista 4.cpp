#include <stdio.h>
#include <conio.h>
#include <locale.h>

/*
1.Chico tem 1,50 metros e cresce 2 cent�metros por ano, enquanto Z� tem 1,10 metros e
cresce 3 cent�metros por ano. Construa um algoritmo que calcule e imprima quantos
anos ser�o necess�rios para que Z� seja maior que Chico. (feito como exemplo)
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
