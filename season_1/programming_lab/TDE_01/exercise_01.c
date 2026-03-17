#include <stdio.h>

int main() {
    int numero;

    printf("Bem-vindo ao teste de numeros!!\n\n");
    printf("Digite um numero de 1 a 7: ");

    if (scanf("%d", &numero) != 1) {
        printf("Erro: Voce nao digitou um algarismo\n");
        return 1;
    }

    switch (numero) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terca-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sabado\n");
            break;
        default:
            printf("Dia invalido\n");
    }

    return 0;
}