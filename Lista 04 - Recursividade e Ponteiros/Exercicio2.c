/*
    Fa�a uma fun��o para encontrar a soma dos d�gitos de um n�mero usando recurs�o. Fa�a um
    programa principal que leia um n�mero, acione a fun��o e exiba o resultado gerado.
    Autor - Jo�o Comini
    Data - 09/10/24
*/
#include <stdio.h>
#include <stdlib.h>

int somaDigitos (int numero)
{
    if (numero < 10) return numero;
    else return ((numero%10) + somaDigitos(numero/10));
}

int main()
{
    int N;

    //printf("Digite: ");
    scanf("%d",&N);
    printf("%d\n",somaDigitos(N));
    return 0;
}

