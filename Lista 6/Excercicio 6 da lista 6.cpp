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
6.Fa�a um programa em C que leia um vetor com 10 posi��es de n�meros inteiros. Em
seguida, receba um novo valor do usu�rio e verifique se este valor se encontra no vetor
e em que posi��es. Caso n�o seja encontrado, exiba a mensagem: �N�mero n�o
encontrado!�
*/

#define tam 10
main(){
	setlocale(LC_ALL, "portuguese");
	int vetor[tam], procura = 0, x = 0;
	char nencontrado = 'S';
	
	printf("\n Preencha o primeiro vetor: \n");
	for(x = 0; x < tam; x++){
		printf("\n informe um valor para a posi��o %i do vetor: ", x);
		scanf("%i", &vetor[x]);
}
	printf("\n Digite o valor que deseja procurar: ");
	scanf("%i", &procura);
	
	for(x = 0; x < tam; x++){
		if(vetor[x] == procura){
			printf("\n\tValor encorntrado na posi��o: %i", x);
			nencontrado= 'N';
		}
	}

	if(nencontrado == 'S') printf("\n N�o encontrado o valor");
getch ();
}
