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

