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
Excercicio 1 Comando de multipla seleção:
Faça um programa em C que, dada uma nota de 0 a 10, mostre o conceito relativo
à nota, segundo a tabela a seguir:
- >0 a 2: Conceito E
- >2 e <=4: Conceito D
- >4 e <= 6: Conceito C
- >6 e <=8: Conceito B
- >8 e <= 10: Conceito A
*/

main(){
	setlocale(LC_ALL, "portuguese");
	int nota;
	
	printf("Digite nota do aluno: ");
	scanf("%i", &nota);
	switch(nota){
		case 0 ... 1: printf("Aluno tirou E!");
		break;
		case 2 ... 3: printf("Aluno tirou D!");
		break;
		case 4 ... 5: printf("Aluno tirou C!");
		break;
		case 6 ... 7: printf("Aluno tirou B!");
		break;
		case 8 ... 10: printf("Aluno tirou A!");
		break;
	}
	
getch ();
}
