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
Exercicio 4 Comando de Repetição
 Para um grupo de 5 alunos, faça um programa em C que determine:
	A idade média dos alunos com menos de 1,70m de altura;
	A altura média dos alunos com mais de 20 anos.
*/

int main(){
	int i, idadeAluno20, altAluno17;
    float altura, m_altura, idade, m_idade;
    i = idadeAluno20 = altAluno17 = 0;
    idade = altura = m_altura = m_idade = 0.0;

    printf (" =============== Informacoes dos Alunos ===============\n\n");
    for(i=1; i<=3; i++)
    {
        printf ("\nInsira o idade do aluno %d: ", i);
        scanf ("%f", &idade);
        printf ("Insira o tamanho do aluno %d: ", i);
        scanf ("%f", &altura);

        if ( idade > 20.0 ) {
            ++idadeAluno20;
            m_altura += altura;
        }
        if ( altura < 1.7 ) {
            ++altAluno17;
            m_idade += idade;
        }
    }
    printf ("\naltura media dos alunos com mais de 20 anos: %.2f", m_altura/idadeAluno20);
    printf ("\nA idade media dos alunos com menos de 1,70m de altura: %.1f", m_idade/altAluno17);
getch ();
}
