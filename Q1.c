Questão 1:

c
#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano (1800 a 2022): ");
    scanf("%d", &ano);

    if ((ano >= 1896 && ano <= 2020 && ano % 4 == 0) || (ano == 2022)) {

        printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n", ano);

    }
    else if ((ano >= 1930 && ano <= 2018) && (ano % 4 == 0 || (ano == 2018 || ano == 2022))) {

        printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", ano);

    }
    else {

        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);

    }

    return 0;
}

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
Questão 5:

int main() {

    int X, Y;

 
    printf("Digite o valor de X: ");
    scanf("%d", &A);

    printf("Digite o valor de Y: ");
    scanf("%d", &B);


    if (X == Y) {
        printf("Os valores lidos sao iguais.\n");
    } else {

        int maior, menor;
        if (X > Y) {
            maior = X;
            menor = Y ;
        } else {
            maior = Y;
            menor = X;
        }


        if (maior % menor == 0) {
            printf("O maior valor eh %d e eh multiplo do menor valor.\n", maior);
        } else {
            printf("O maior valor eh %d e nao eh multiplo do menor valor.\n", maior);
        }
    }

    return 0;
}

