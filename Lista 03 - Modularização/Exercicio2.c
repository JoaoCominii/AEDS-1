/*
    A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando dados sobre
    o sal�rio e n�mero de filhos. Fa�a um procedimento que leia esses dados para um n�mero n�o
    determinado de pessoas, calcule e exiba a m�dia de sal�rio da popula��o (a condi��o de parada
    deve ser um flag com sal�rio negativo). Fa�a um programa que acione o procedimento.
    Autor - Jo�o Comini
    Data - 09/09/24
*/
#include <stdio.h>
#include <stdlib.h>
void mediaSalario();

int main()
{
    // Chamar a fun��o mediaSalario
    mediaSalario();



    return 0;
}

void mediaSalario()
{
    float salario, media = 0;
    int filhos, habitantes = 0;
    printf("Salario/Filhos\n");
    scanf("%f %i", &salario, &filhos);
    while(salario >= 0)
    {
        printf("Salario/Filhos\n");
        scanf("%f %i", &salario, &filhos);
        media += salario;
        habitantes++;
    }
    media = media / habitantes;
    printf("%.2f\n", media);
}
