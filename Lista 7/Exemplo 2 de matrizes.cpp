#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int matrizx [20][10], count = 0, i = 0, j = 0;
	
	for(i = 0; i < 20; i++){
		for(j = 0; j < 10; j++){
			printf("%4i", matrizx[i][j]);
		}
		printf("\n");
	}


getch ();
}
