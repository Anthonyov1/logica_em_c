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
Excercicio 2 Comando de multipla escolha: 
Faça um programa em C que, dada a idade de um nadador. Classifique-o em uma
das seguintes categorias:
- Infantil A = 5 - 7 anos
- Infantil B = 8 - 10 anos
- Juvenil A = 11- 13 anos
- Juvenil B = 14 - 17 anos
- Sênior = 18 - 25 anos 
Apresentar mensagem “idade fora da faixa etária” quando for outro ano não contemplado
*/

main(){
	setlocale(LC_ALL, "portuguese");
	int idade;
	
	printf("Digite a idade do nadador: ");
	scanf("%i", &idade);
	switch(idade){
		case 0 ... 4: printf("Idade fora da faixa etária!");
		break;
		case 5 ... 7: printf("Nadador infatil A!");
		break;
		case 8 ... 10: printf("Nadador infantil B!");
		break;
		case 11 ... 13: printf("Nadador juvenil A!");
		break;
		case 14 ... 17: printf("Nadador juvenul B!");
		break;
		case 18 ... 25: printf("Nadador sênior");
		break;
		case 26 ... 35: printf("Idade fora da faixa etária!");
		break;
	}

getch ();
}
