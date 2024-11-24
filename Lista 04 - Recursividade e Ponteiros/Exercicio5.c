/*
    Fa�a uma fun��o recursiva que calcula o valor de S da s�rie a seguir para n > 0:
    S = 1/1! + 1/2! + 1/3! + ... + 1/N !
    double serie (int n)
    Fa�a um programa principal que leia um n�mero, acione a fun��o e exiba o resultado gerado.
    Autor - Jo�o Comini
    Data - 09/10/24
*/
#include <stdio.h>
#include <stdlib.h>

int fatorial(int N)
{
    if (N == 0 || N == 1)
        return 1;
    else
        return N * fatorial(N - 1);
}

float serie(int N)
{
    if (N == 1)
        return 1.0;
    else
        return serie(N - 1) + (1.0 / fatorial(N));
}

int main()
{
    int num;
    // printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);
    printf("%.2f\n", serie(num));
    return 0;
}

