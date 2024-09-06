/*
    Fa�a um programa que imprima todos os elementos da s�rie de Fibonacci menores que L
    Autor - Jo�o Comini
    Data - 06/09/24
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declara��o de variaveis
    int L, primeiro = 0, segundo = 1, proximo;

    // Leitura dados
    printf("Digite um valor m�ximo para a s�rie de Fibonacci: ");
    scanf("%i", &L);

    // Calcular elementos da s�rie de Fibonacci
    while (primeiro < L) {
        printf("%lld ", primeiro);
        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
    }

    return 0;
}

