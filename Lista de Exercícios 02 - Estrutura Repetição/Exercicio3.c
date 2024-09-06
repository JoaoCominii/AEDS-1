/*
    Um programa que receba dez n�meros e verifique se eles s�o divis�veis por 3 e 9 (ao
    mesmo tempo), por 2 e por 5. Caso algum n�mero n�o seja divis�vel por nenhum desses
    n�meros mostre a mensagem �N�mero n�o � divis�vel pelos valores�. Apresente tamb�m
    ao final a quantidade de n�meros divis�veis por 3 e 9, por 2 e por 5.
    Autor - Jo�o Comini
    Data - 28/08/24
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declara��o de vari�veis
    int valor, contaMultiplos3e9 = 0, contaMultiplos2 = 0, contaMultiplos5 = 0, i = 1;

    // Leitura e testes
    while(i <=10)
    {
        printf("Digite o %i.o valor", i);
        scanf("%i", &valor);
        if(valor % 3 == 0 && valor % 9 == 0)
            contaMultiplos3e9++;
        else if(valor % 2 == 0)
            contaMultiplos2++;
        else if(valor % 5 == 0)
            contaMultiplos5++;
        else printf("N�mero n�o � divis�vel pelos valores\n");
        i++;
    }

    // Escrever na tela
    printf("%i %i %i", contaMultiplos3e9, contaMultiplos2, contaMultiplos5);

    return 0;
}

