#include <stdio.h>

int main() {
    int valor, soma = 0;

    while(soma < 20) {
        printf("Digite o valor do dado (1 a 6): ");
        scanf("%d", &valor);

        soma += valor;
        printf("Soma atual: %d\n", soma);
    }

    printf("A soma chegou a %d, fim do jogo!\n", soma);

    return 0;
}


