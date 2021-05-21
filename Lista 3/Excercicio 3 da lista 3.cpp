#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
3.Desenvolva um algoritmo que leia 4 números e calcule o quadrado de cada um deles. Se o valor resultante do quadrado do terceiro número for maior ou igual a 500,
imprima-o e finalize. Caso contrário, imprima os valores lidos e seus respectivos quadrados.
*/

main(){
setlocale(LC_ALL, "portuguese");
int num1, num2, num3, num4;

	printf("Digite o primeiro numero: ");
	scanf("%i", &num1);
	printf("Digite o segundo numero: ");
	scanf("%i", &num2);
	printf("digite o terceiro numero: ");
	scanf("%i", &num3);
	printf("Digite o quarto e ultimo numero: ");
	scanf("%i", &num4);
	if(num3*num3 >= 500 ){
		printf("O quadrado do num3, que é %i, é maior ou igual a 500", num3*num3);
	}
	else{
		printf("Os respectivos resultados dos numeros\n num1:%i\n num2:%i\n num3:%i\n num4:%i\n", num1*num1, num2*num2, num3*num3, num4*num4);
    }
getch ();
}
