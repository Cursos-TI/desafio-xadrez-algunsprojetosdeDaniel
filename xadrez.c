#include <stdio.h>
int main () {
    int torre, bispo, rainha, cavalo1, cavalo2;

    printf("A torre vai andar 5 casas para a direita\n");

    torre = 1;

    while (torre <= 5) {
        printf("Direita\n");
        torre++;
    }

    printf("O bispo vai andar 5 casas na diagonal\n");

    bispo = 1;

    do {
        printf("Cima\n");
        printf("Direita\n");
        bispo++;
    } while (bispo <= 5);

    printf("A rainha vai andar 8 casas para a esquerda\n");

    rainha = 1;

    for (rainha; rainha <= 8; rainha++) {
        printf("esquerda\n");
    }

    printf("O cavalo vai andar 2 casas para baixo e 1 casa para a esquerda\n");

    cavalo1 = 1;
    cavalo2 = 1;

    for (cavalo2; cavalo2 <= 1; cavalo2++) {
        do {
            printf("Baixo\n");
            cavalo1++;
            
        } while (cavalo1 <= 2);
        printf("Esquerda\n");
        cavalo2++;
    }

    printf("gay");

    return 0;

}