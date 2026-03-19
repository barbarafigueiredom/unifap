#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;

    printf("Digite um número de 3 dígitos: ");

    if (scanf("%d", &numero) != 1) {
        printf("Erro: voce nao digitou um numero inteiro valido.\n");
        return 1;
    }

    if (abs(numero) >= 100 && abs(numero) <= 999) {
        int centenas = abs(numero) / 100;

        if (centenas % 2 == 0) {
            printf("O algarismo das centenas e par.\n");
        } else {
            printf("O algarismo das centenas e impar.\n");
        }
    } else {
        printf("Erro: o numero nao tem 3 digitos.\n");
    }

    return 0;
}