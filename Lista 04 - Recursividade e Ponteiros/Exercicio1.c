/*
    Fa�a uma fun��o em C para contar os d�gitos de um determinado n�mero usando recurs�o. Fa�a
    um programa principal que leia um n�mero, acione a fun��o e exiba o resultado gerado
    Autor - Jo�o Comini
    Data - 09/10/24
*/
#include <stdio.h>
#include <stdlib.h>

int contaDigitos (int numero)
{
    if (numero < 10) return 1;
    else return (1 + contaDigitos(numero/10));
}

int main()
{
    int N;

    //printf("Digite: ");
    scanf("%d",&N);
    printf("%i \n",contaDigitos(N));
    return 0;
}
