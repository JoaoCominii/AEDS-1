/*
    Fa�a um programa que imprima os L primeiros elementos da s�rie de Fibonacci. Por
    exemplo, se o usu�rio digitou o n�mero 40, dever�o ser apresentados os 40 n�meros da
    sequ�ncia na tela.
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
    printf("Digite a quantidade de elementos da s�rie de Fibonacci que deseja ver: ");
    scanf("%i", &L);

    // Calcular L elementos da s�rie de Fibonacci
    for (int i = 1; i <= L; i++)
    {
        if (i == 1)
            printf("%i ", primeiro);
        else if (i == 2)
            printf("%i ", segundo);
        else
        {
            proximo = primeiro + segundo;
            printf("%i ", proximo);
            primeiro = segundo;
            segundo = proximo;
        }
    }

    return 0;
}

