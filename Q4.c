Questão 4:

c
#include <stdio.h>

int main() {

    char nivel;
    float salario, aumento, salario_at;

    printf("Digite a relevancia do profissional (a, b ou c): ");
    scanf(" %c", &nivel);

    printf("Digite o salario atual do profissional: ");
    scanf("%f", &salario);

    switch (nivel) {
        case 'a':
            aumento = 0.05;
            break;
        case 'b':
            aumento = 0.07;
            break;
        case 'c':
            aumento = 0.08;
            break;
        default:
            printf("Nivel de relevancia invalido.\n");
            return 1;
    }

    salario_at = salario + (salario * aumento);

    printf("R$ %.2f\n", salario_at);

    return 0;

}
#include <stdio.h>