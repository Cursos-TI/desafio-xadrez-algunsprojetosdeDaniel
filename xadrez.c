#include <stdio.h>



void torre1 (int casastorre) {
    if (casastorre > 0 && casastorre <= 5) {
        printf("direita\n");
        torre1(casastorre - 1);
    }
}

void bispo1 (int casasbispo) {
    if (casasbispo > 0 && casasbispo <= 5) {
        printf("cima\n");
        printf("direita\n");
        bispo1(casasbispo -1);
    }
}

void rainha1 (int casasrainha) {
    if (casasrainha > 0 && casasrainha <= 8) {
        printf("esquerda\n");
        rainha1(casasrainha - 1);
    }
}

void cavalo1 (int casascavalo) {
    casascavalo--;
   for(casascavalo; casascavalo > 0; casascavalo--) {
    printf("cima\n");
   }
   printf("direita\n");
}

int main () {
    int torre, bispo, rainha, cavalo;

    printf("Digite quantas casas é para a torre andar\n");
    scanf("%d", &torre);

    if(torre <= 5) {
        torre1(torre);
    }

    printf("Digite quantas casas é para o bispo andar\n");
    scanf("%d", &bispo);

    if(bispo <= 5) {
        bispo1(bispo);
    }
    printf("Digite quantas casas é para a rainha andar\n");
    scanf("%d", &rainha);

    if (rainha <= 8) {
        rainha1(rainha);
    }

    printf("Digite quantas casas é para o cavalo andar\n");
    scanf("%d", &cavalo);

    if(cavalo <= 3) {
        cavalo1(cavalo);
    }


    return 0;

}