#include <stdio.h>

int main() {
    int segredo = 27; 
    int palpite;

    do {
        printf("Digite um palpite entre 1 e 50: ");
        scanf("%d", &palpite);

        if(palpite > segredo) {
            printf("Muito alto! Tente um numero menor.\n");
        } else if(palpite < segredo) {
            printf("Muito baixo! Tente um numero maior.\n");
        }
    } while(palpite != segredo);

    printf("Parabens! Voce acertou!! %d!\n", segredo);

    return 0;
}

