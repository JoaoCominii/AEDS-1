/*
    Escreva um programa em C para encontrar o maior elemento em um vetor de inteiros usando a
    Aloca��o de Mem�ria Din�mica. Pe�a para o usu�rio inserir inicialmente o tamanho do vetor a
    ser criado, e ap�s, pe�a para ele inserir um a um todos os valores do vetor.
    Autor - Jo�o Comini
    Data - 11/11/24
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int tam, maior_elemento = -1000;
    printf("Digite o tamanho do vetor:");
    scanf("%i", &tam);
    int* vetor = (int*)malloc(tam*sizeof(int));
    for(int i = 0; i < tam; i++)
    {
        printf("valor vetor[%i]\n", i);
        scanf("%i", vetor + i);
    }
    for(int i= 0; i < tam; i++)
    {
        if(*(vetor + i) > maior_elemento)
            maior_elemento = *(vetor + i);
    }

    printf("Maior elemento : %i", maior_elemento);

    return 0;
}
