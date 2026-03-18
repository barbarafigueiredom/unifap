#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");

    // Verifica se a entrada é um inteiro válido
    if (scanf("%d", &numero) != 1) {
        printf("Erro: voce nao digitou um numero inteiro valido\n");
        return 1;
    }

    if (numero % 3 == 0) {
        printf("E multiplo de 3\n");
    } else {
        printf("Nao e multiplo de 3\n");
    }

    return 0;
}