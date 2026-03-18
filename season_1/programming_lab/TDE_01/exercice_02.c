#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    if (scanf("%d", &num1) != 1) {
        printf("Erro: Voce nao digitou um algarismo\n");
        return 1;
    }

    printf("Digite o segundo numero: ");
    if (scanf("%d", &num2) != 1) {
        printf("Erro: Voce nao digitou um algarismo\n");
        return 1;
    }

    if (num1 > num2) {
        printf("O maior numero e: %d\n", num1);
    } else if (num2 > num1) {
        printf("O maior numero e: %d\n", num2);
    } else {
        printf("Os dois numeros sao iguais.\n");
    }

    return 0;
}