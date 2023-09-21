Questão 3:

c
#include <stdio.h>

int main() {

    int senha_cadastrada, senha_inserida;

    printf("Digite a senha (6 digitos): ");
    scanf("%d", &senha_cadastrada);

    while (1) {
        printf("Digite a senha inserida: ");
        scanf("%d", &senha_inserida);

        if (senha_inserida == senha_cadastrada) {
            printf("senha valida!\n");
            break;
        } else {
            printf("senha invalida!\n");
        }
    }

    return 0;
}
