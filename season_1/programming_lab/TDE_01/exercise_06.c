#include <stdio.h>
#include <math.h>

int main() {
    int numero;

    printf("Digite um numero: ");

    // Verifica se a leitura foi válida
    if (scanf("%d", &numero) != 1) {
        printf("Erro: digite um numero inteiro valido.\n");
        return 1;
    }

    if (numero < 0) {
        printf("Numeros negativos nao sao quadrados perfeitos.\n");
    } else {
        int raiz = (int) sqrt(numero);

        if (raiz * raiz == numero) {
            printf("E um quadrado perfeito.\n");
        } else {
            printf("Nao e um quadrado perfeito.\n");
        }
    }

    return 0;
}