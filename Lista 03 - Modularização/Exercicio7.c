/*
    Fa�a uma fun��o que recebe um valor inteiro e verifica se o valor � positivo ou negativo. A fun��o
    deve retornar um valor l�gico (true ou false). Fa�a um programa que l� N n�meros e para cada
    um deles exibe uma mensagem informando se ele � positivo ou n�o, dependendo se foi retornado
    verdadeiro ou falso pela fun��o.
    Autor - Jo�o Comini
    Data - 12/09/24
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool verificaSinal(int);

int main()
{
    int valor, N;
    printf("N:");
    scanf("%i", &N);
    for(int i = 0; i < N; i++)
    {
        printf("valor:");
        scanf("%i", &valor);
        if(valor != 0)
        {
            if(verificaSinal(valor) == true)
                printf("SIM\n");
            else
                printf("NAO\n");
        } // fim de if
    } // fim de for

    return 0;
}

bool verificaSinal(int a)
{
    if(a > 0)
        return true;
    else if(a < 0)
        return false;
}
