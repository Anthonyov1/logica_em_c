#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

/*
3.Desenvolva um programa em C que calcule o consumo médio de combustível de um carro,
onde o usuário informa a distância total percorrida e o total de combustível gasto. 
*/

main(){
setlocale(LC_ALL, "portuguese");
float litros, km, kml;
	
		printf("Combustivel do carro: ");
		scanf("%f", &litros);
		printf("Km percorrido: ");
		scanf("%f", &km);
		kml = km/litros;
		printf("O carro possuia [litros]: %.2f\n\n", litros);
		printf("Percorreu [km]: %.2f\n\n", km);
		printf("Gasto total por quilometros percorrido [km/l] : %.2f", kml);

getch ();
//system("pause");
}
