#include <stdio.h>

int main() {
    int numerosecreto = 42;
    int palpite;

    do {
        printf("adivinhe o número secreto: ");
        scanf("%d", &palpite);

        if (palpite != numerosecreto) {
            printf("errado! tente novamente.\n\n");
        }
    } while (palpite != numerosecreto);

    printf("\nparabéns! você acertou o número secreto (%d)!\n", numerosecreto);

    return 0;
}