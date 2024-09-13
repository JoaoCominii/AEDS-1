/*
    Escreva um procedimento que recebe 3 valores reais X, Y e Z e que verifique se esses valores podem
    ser os comprimentos dos lados de um tri�ngulo e, neste caso, exibe qual � o tipo de tri�ngulo
    formado. Para que X, Y e Z formem um tri�ngulo � necess�rio que a seguinte propriedade seja
    satisfeita: o comprimento de cada lado de um tri�ngulo � menor do que a soma do comprimento
    dos outros dois lados. O procedimento deve identificar o tipo de tri�ngulo formado observando
    as seguintes defini��es:
    � Tri�ngulo Equil�tero: os comprimentos dos 3 lados s�o iguais;
    � Tri�ngulo Is�sceles: os comprimentos de pelo menos 2 lados s�o iguais.
    � Tri�ngulo Escaleno: os comprimentos dos 3 lados s�o diferentes.
    Fa�a um programa que leia um n�mero indeterminado (at� lado negativo) de tri�ngulos (valores
    dos 3 lados) e para cada tri�ngulo, acione o procedimento.
    Autor - Jo�o Comini
    Data - 10/09/24
*/
#include <stdio.h>
#include <stdlib.h>
void ehTriangulo(float, float, float);

int main()
{
    float X, Y, Z;
    printf("LADO1, LADO2, LADO3\n");
    scanf("%f %f %f", &X, &Y, &Z);
    while(X >= 0 && Y >= 0 && Z>= 0)
    {
        ehTriangulo(X, Y, Z);
        printf("LADO1, LADO2, LADO3\n");
        scanf("%f %f %f", &X, &Y, &Z);
    }

    return 0;
}

void ehTriangulo(float X, float Y, float Z)
{
    if(X < (Y + Z) && Y < (X + Z) && Z < (X + Y)) // Condicao para saber se � triangulo
    {
        if(X == Y && Y == Z) // Tri�ngulo Equil�tero: os comprimentos dos 3 lados s�o iguais;
            printf("TRIANGULO EQUILATERO\n");
        else if(X == Y || Y == Z || X == Z) // Tri�ngulo Is�sceles: os comprimentos de pelo menos 2 lados s�o iguais.
            printf("TRIANGULO ISOSCELES\n");
        else if(X != Y && Y != Z && X != Z) // Tri�ngulo Escaleno: os comprimentos dos 3 lados s�o diferentes.
            printf("TRIANGULO ESCALENO\n");
    }
    else printf("N�O TRIANGULO\n");
}
