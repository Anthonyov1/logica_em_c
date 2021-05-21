#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>


main()
{
setlocale(LC_ALL, "portuguese");
char aluno[8]; 	
float n1, n2, m;
	
	printf(" =======================\n ");
	printf(" ESCOLA JAVALI CANSADO\n ");
	printf("=======================\n ");
	printf("NOME DO ALUNO : ");
	scanf("%s", &aluno);
	printf(" =======================\n ");
	printf("PRIMEIRA NOTA : ");
	scanf("%f", &n1);
	printf(" SEGUNDA NOTA : ");
	scanf("%f", &n2);
	printf(" =======================\n ");
	m = (n1 + n2)/ 2;
	printf("A media do aluno é : %.2f\n", m);
	if(m >= 60 && m <= 100) 
	{
		printf(" ALUNO APROVADO");
	}
	else
	if(m >= 20 && m <= 59.99)
	{
		printf(" ALUNO EM RECUPERAÇÃO");	
	}
	else
	{
		printf(" ALUNO REPROVADO");
	}



getch ();
}
