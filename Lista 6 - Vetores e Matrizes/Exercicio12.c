/*
    Programa em C para imprimir todas as permuta��es de um vetor de caracteres usando ponteiros.
    Autor - Jo�o Comini
    Data - 12/11/24
*/

#include <stdio.h>

// Fun��o para trocar dois elementos usando ponteiros
void trocar(char* a, char* b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Fun��o recursiva para gerar as permuta��es
void permutar(char* vetor, int inicio, int fim) {
    if (inicio == fim) {
        // Imprime a permuta��o atual
        for (int i = 0; i <= fim; i++) {
            printf("%c", *(vetor + i));
        }
        printf("\n");
    } else {
        for (int i = inicio; i <= fim; i++) {
            trocar((vetor + inicio), (vetor + i));    // Troca
            permutar(vetor, inicio + 1, fim);        // Recurs�o
            trocar((vetor + inicio), (vetor + i));    // Desfazer a troca (backtracking)
        }
    }
}

int main() {
    int n;

    // Entrada do tamanho do vetor
    printf("Digite o tamanho do vetor de caracteres: ");
    scanf("%d", &n);

    // Alocar espa�o para o vetor de caracteres
    char* vetor = (char*)malloc(n * sizeof(char));
    if (vetor == NULL) {
        printf("Erro ao alocar mem�ria.\n");
        return 1;
    }

    // Entrada dos caracteres
    printf("Digite os caracteres (sem espa�os):\n");
    for (int i = 0; i < n; i++) {
        scanf(" %c", (vetor + i));
    }

    // Exibi��o das permuta��es
    printf("Permutacoes:\n");
    permutar(vetor, 0, n - 1);

    // Libera��o da mem�ria alocada
    free(vetor);

    return 0;
}
