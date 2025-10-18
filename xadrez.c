#include <stdio.h>
int main () {
    int torre, bispo, rainha;

    printf("o bispo vai andar 5 casas para a direita");

    torre = 1;

    while (torre <= 5) {
        printf("direita");
        torre++;
    }

    printf("o bispo vai andar 5 casas na diagonal");

    bispo = 1;

    do {
        printf("cima");
        printf("direita");
        bispo++;
    } while (bispo <= 5);

    printf("a rainha vai andar 8 casas para a esquerda");

    rainha = 1;

    for (rainha; rainha <= 8; rainha++) {
        printf("esquerda");
    }

    return 0;

}