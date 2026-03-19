#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");

    if (scanf("%d", &numero) != 1) {
        printf("Erro: voce nao digitou um numero inteiro valido.\n");
        return 1;
    }

    if (numero % 3 == 0 && numero % 7 == 0) {
        printf("O numero e divisivel por 3 e por 7.\n");
    } else {
        printf("O numero NAO e divisivel por 3 e por 7.\n");
    }

    return 0;
}