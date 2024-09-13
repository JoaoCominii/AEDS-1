/*
    Escreva uma fun��o que recebe por par�metro um valor inteiro e positivo N e retorna o valor de
    S, calculado segundo a f�rmula abaixo.
    Autor - Jo�o Comini
    Data - 12/09/24
*/
#include <stdio.h>
#include <stdlib.h>
float calculaS(int);

int main()
{
    int N;
    printf("N:");
    scanf("%i", &N);
    printf("%f", calculaS(N));



    return 0;
}

float calculaS(int N)
{
    float S = 0, fatorial;
    for(int den = 0; den <= N; den++)
    {
        fatorial = 1;
        for(int fator = den; fator > 1; fator--)
        {
            fatorial = fatorial * fator;
        }
        S = S + 1 / fatorial;
    }



    return S;
}
