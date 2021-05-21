#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
2.Elabore um algoritmo que dada a idade de um nadador classifique-o em uma das seguintes categorias:
Infantil A	5 a 7 anos
Infantil B	8 a 11 anos
Juvenil A	12 a 13 anos
Juvenil B	14 a 17 anos
Adultos	Maiores de 18 anos
*/

main(){
	setlocale(LC_ALL, "portuguese");
	int idade;
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	if(idade < 5)
		printf("Sem categoria");
	else{
		switch(idade){
			case 5 ... 7: printf("Infantil A");
			break;
			case 8 ... 11: printf("Infantil B");
			break;
			case 12 ... 13: printf("Juvenil A");
			break;
			case 14 ... 17: printf("Juvenil B");
			break;
			default: printf("Maiores de 18");
		
		}
	}

getch ();
}
