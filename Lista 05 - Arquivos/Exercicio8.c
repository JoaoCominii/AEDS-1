/*
    Crie um programa que leia a quantidade de ve�culos que uma locadora de ve�culos possui e o
    valor que ela cobra por cada aluguel, mostrando as informa��es pedidas a seguir:
    a) Sabendo-se que um ter�o dos ve�culos s�o alugados por m�s, exiba o faturamento anual da
    locadora;
    b) Quando o cliente atrasa a entrega, � cobrada uma multa de 20% sobre o valor do aluguel.
    Sabendo que um d�cimo dos ve�culos alugados no m�s � devolvido com atraso, calcule o
    valor ganho com multas no m�s;
    c) Sabe-se ainda que 2% dos ve�culos precisam de manuten��o ao longo do ano. Calcule o valor
    gasto com a manuten��o anual, sabendo que o valor gasto em m�dia com a manuten��o �
    de R$ 600,00.
    Autor - Jo�o Comini
    Data - 09/10/24
*/
#include <stdio.h>
#include <stdlib.h>
void calcularValorAlugel(int veiculos, float aluguel)
{
    // a
    float faturamentoMensal = veiculos / 3 * aluguel;
    float faturamentoAnual = faturamentoMensal * 12;
    // b
    float atraso = veiculos / 3 / 10 * (aluguel * 0.2);
    // c
    float manutencao = (veiculos * 0.02) * 600;

    // Exibindo os resultados na tela
    printf("Faturamento anual: R$ %.2f\n", faturamentoAnual);
    printf("Ganho com multas no m�s: R$ %.2f\n", atraso);
    printf("Gasto anual com manuten��o: R$ %.2f\n", manutencao);

    // Gravando no arquivo
    FILE* arq = fopen("resultados.txt", "w");
    fprintf(arq,"Faturamento anual: R$ %.2f\n", faturamentoAnual);
    fprintf(arq,"Ganho com multas no m�s: R$ %.2f\n", atraso);
    fprintf(arq,"Gasto anual com manuten��o: R$ %.2f\n", manutencao);
    fclose(arq);

}

int main()
{
    int quantidadeVeiculos;
    float valorAluguel;

    printf("Quantidade de veiculos:");
    scanf("%i", &quantidadeVeiculos);
    printf("Valor do aluguel:");
    scanf("%f", &valorAluguel);
    calcularValorAlugel(quantidadeVeiculos, valorAluguel);


    return 0;
}
