/*
    Crie um programa que escreva de 1 at� 10 em um arquivo, armazenando um n�mero por linha.
    Autor - Jo�o Comini
    Data - 09/10/24
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* arq = fopen("teste.txt", "w");
    for(int i = 1; i <= 10; i++)
    {
        fprintf(arq, "%i\n", i);
    }
    fclose(arq);


    return 0;
}
