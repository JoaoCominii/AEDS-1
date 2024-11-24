/*
    Fa�a uma fun��o recursiva que calcula o resto da divis�o usando subtra��es sucessivas:
    int resto (int numerador, int denominador)
    Fa�a um programa principal que leia dois n�meros, acione a fun��o e exiba o resultado gerado.
    Autor - Jo�o Comini
    Data - 09/10/24
*/
#include <stdio.h>
#include <stdlib.h>

int resto(int numerador, int denominador)
{
    if (numerador < denominador)
        return numerador;
    return resto(numerador - denominador, denominador);
}

int main()
{
    int numerador, denominador, resultado;

    //printf("Digite o numerador e o denominador: ");
    scanf("%i %i", &numerador, &denominador);

    resultado = resto(numerador, denominador);
    printf("%i\n", resultado);

    return 0;
}
