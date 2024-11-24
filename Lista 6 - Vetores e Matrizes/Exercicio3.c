/*
    Fa�a um procedimento que preencha 2 vetores X e Y com 10 elementos cada um (ocupando
    as posi��es de 0 a 9 em cada vetor). Fa�a um outro procedimento que receba dois vetores
    preenchidos e gera um novo vetor com os elementos desses 2 vetores intercalados de tal forma
    que nas posi��es �mpares do novo vetor estejam os elementos do primeiro vetor e nas posi��es
    pares os elementos do segundo vetor recebido por par�metro. Fa�a um procedimento que receba
    e exiba o conte�do de um vetor. Fa�a um programa que fa�a as devidas declara��es e acione os
    m�dulos para exemplificar o seu uso.
    Autor - Jo�o Comini
    Data - 09/11/24
*/
#include <stdio.h>
#include <stdlib.h>
#define ln 10

void preencheVetor(int X[ln], int Y[ln])
{
    for(int i = 0; i < ln; i++)
    {
        printf("Valor:\n");
        scanf("%i", &X[i]);
    }
    for(int j = 0; j < ln; j++)
    {
        printf("Valor:\n");
        scanf("%i", &Y[j]);
    }
}

void intercalaVetor(int X[ln], int Y[ln]) {
    int intercalado[2 * ln];
    for (int i = 0; i < ln; i++) {
        intercalado[2 * i] = Y[i];      // Posi��es pares recebem elementos de Y
        intercalado[2 * i + 1] = X[i];  // Posi��es �mpares recebem elementos de X
    }

    printf("\nVetor intercalado:\n");
    for (int i = 0; i < 2 * ln; i++) {
        printf("%i ", intercalado[i]);
    }
    printf("\n");
}

int main()
{
    int X[ln], Y[ln];
    preencheVetor(X,Y);
    intercalaVetor(X,Y);

    return 0;
}
