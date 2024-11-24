/*
    Em uma cidade, sabe-se hipoteticamente que, em janeiro de 2021, n�o ocorreu temperatura
    inferior a 15�C, nem superior a 40�C. Fa�a um programa que armazene as temperaturas de cada
    dia de janeiro em um vetor (de 31 posi��es), calcule e imprima:
    � A menor e a maior temperatura ocorrida;
    � A temperatura m�dia;
    � O n�mero de dias nos quais a temperatura foi inferior a temperatura m�dia.
    Autor - Jo�o Comini
    Data - 09/11/24
*/
#include <stdio.h>
#include <stdlib.h>
#define ln 31
void preencheTemperatura(int temperaturas[ln])
{
        for(int i = 0; i < ln; i++)
        {
            printf("Temperatura:\n");
            scanf("%i", &temperaturas[i]);
        }
}

int menorTemperatura(int temperaturas[ln])
{
    int menor = 1000;
    for(int i = 0; i < ln; i++)
    {
        if(temperaturas[i] < menor)
            menor = temperaturas[i];
    }
    return menor;
}

int maiorTemperatura(int temperaturas[ln])
{
    int maior = -1000;
    for(int i = 0; i < ln; i++)
    {
       if(temperaturas[i] > maior)
       {
           maior = temperaturas[i];
       }
    }
    return maior;
}

float mediaTemperatura(int temperatura[ln])
{
    float media = 0;
    for(int i = 0; i < ln; i++)
    {
        media += temperatura[i];
    }
    return media / ln;
}

int abaixoMedia(int temperatura[ln], float media)
{
    int abaixo = 0;
    for(int i = 0; i < ln; i++)
    {
        if(temperatura[i] < media)
            abaixo++;
    }
    return abaixo;
}

int main()
{
    int temperaturas[ln], menor, maior;
    float media;
    preencheTemperatura(temperaturas);
    menor = menorTemperatura(temperaturas);
    maior = maiorTemperatura(temperaturas);
    media = mediaTemperatura(temperaturas);
    printf("Menor e maior temperatura: %i %i\n", menor, maior);
    printf("M�dia de temperatura: %.2f\n", media);
    printf("N�mero de dias nos quais a temperatura foi inferior a temperatura m�dia: %i", abaixoMedia(temperaturas, media));
    return 0;
}
