Questão 2:

c
#include <stdio.h>

int main() {

    int numero, digitos, soma = 0;

    printf("Digite um numero inteiro positivo: ");

    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O numero inserido e impar.\n");
    } else {
        printf("O numero inserido e par.\n");
    }

    digitos = numero;
    while (digitos > 0) {
        soma += digitos % 10;
        digitos /= 10;
    }

    printf("A soma dos digitos do numero e: %d\n", soma);

    return 0;
}