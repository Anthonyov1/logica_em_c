#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

main(){
setlocale(LC_ALL, "portuguese");
float n1, n2, m;

	printf("Digite a primeira nota : ");
	scanf("%f", &n1);
	printf("Digite a segunda nota : ");
	scanf("%f", &n2);
	m = (n1*2 + n2*3)/5;
	printf("A soma das notas foi : %.2f", m);
	
getch ();
}
