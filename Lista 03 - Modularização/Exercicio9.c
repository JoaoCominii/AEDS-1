/*
    Fa�a uma fun��o que l� um n�mero indeterminado de notas de alunos, calcula e retorna a m�dia
    das notas dos alunos aprovados (nota maior ou igual a 6). Fa�a um programa que l� o n�mero
    de alunos e imprime a m�dia retornada pela fun��o.
    Autor - Jo�o Comini
    Data - 12/09/24
*/
#include <stdio.h>
#include <stdlib.h>
float mediaAprovados(int);

int main()
{
    int alunos;
    printf("Numero alunos:");
    scanf("%i", &alunos);
    printf("%.2f", mediaAprovados(alunos));


    return 0;
}

float mediaAprovados(int N)
{
    float nota, soma, conta = 0;
    for(int i = 1; i <= N; i++)
    {
        printf("%i.a Nota:", i);
        scanf("%f", &nota);
        if(nota >= 6)
        {
            soma += nota;
            conta++;
        }
    }
    soma = soma / conta;
    return soma;
}
