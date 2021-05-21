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
Exercicio 3 Comando de Repetição
 Faça um programa em C que receba o preço de custo e o preço de venda de 5
produtos. Mostre como resultado se houve lucro, prejuízo ou empate para cada
produto. Ao final informe media de preço de custo e do preço de venda
*/

main(){
	setlocale(LC_ALL, "portuguese");
	int i,v[4],x[4],lucro,prejuizo,empate;

   for (i=0;i<4;i++){
       printf ("valor produto %d =",i);
       scanf ("%d",&v[i]);
       printf ("venda produto %d =",i);
       scanf ("%d",&x[i]);
       
           lucro=x[i]>v[i];
           prejuizo=x[i]<v[i];
           empate=x[i]=v[i];
           
           if (lucro>prejuizo){
           printf ("produto [%d] Lucro\n\n",i);
           } else if (prejuizo>lucro){
           printf ("produto [%d] Prejuizo\n\n",i);
           } else if (empate){
           printf ("produto [%d] Empate \n\n",i);
           }
   }
getch ();}
