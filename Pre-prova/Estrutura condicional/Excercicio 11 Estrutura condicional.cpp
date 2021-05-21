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
Excericio 11 Estrututra condicional:	
 Considere que o último concurso vestibular apresentou três provas: Português,
Matemática e Conhecimentos Gerais. Considerando que para cada candidato temse um registro contendo o seu nome e as notas obtidas em cada uma das provas,
construa um programa em C que forneça:
- O nome e as notas em cada prova do candidato;
- A média do candidato;
- Uma informação dizendo se o candidato foi aprovado ou não. Considere que
um candidato é aprovado se sua média for maior ou igual a 7.0 e se não
apresentou nenhuma nota abaixo de 5.0 
*/
main(){
	setlocale(LC_ALL, "portuguese");
	char nome[100];
	float nota1, nota2, nota3, media;

	printf("Digite o nome do aluno: ");
	scanf("%s", &nome);
	printf("Digite a nota deste aluno em Português: ");
	scanf("%f", &nota1);
	printf("Digite a nota deste aluno em Matemática: ");
	scanf("%f", &nota2);
	printf("Digite a nota deste aluno em Conhecimentos Gerais: ");
	scanf("%f", &nota3);
	media = nota1 + nota2 + nota3/3;
	if(media >= 7){
		printf("O aluno %s, tirou em Português nota %.1f, em Matemática %.1f, Conhecimentos Gerais %.1f e sua media foi %.1f. APROVADO!", nome, nota1, nota2, nota3, media);
	}else
		if(media >= 5 && media < 7){
			printf("O aluno %s, tirou em Português nota %.1f, em Matemática %.1f, Conhecimentos Gerais %.1f e sua media foi %.1f. RECUPERAÇÃO!", nome, nota1, nota2, nota3, media);
		}else
			if(media >= 0 && media < 5){
				printf("O aluno %s, tirou em Português nota %.1f, em Matemática %.1f, Conhecimentos Gerais %.1f e sua media foi %.1f. REPROVADO!", nome, nota1, nota2, nota3, media);
			}

getch ();
}
