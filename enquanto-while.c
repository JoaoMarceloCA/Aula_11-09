#include <stdio.h>

int main() {
    int x, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &x);

    while (x != 0) {
        soma = soma + x;
        printf("Digite outro numero: ");
        scanf("%d", &x);
    }

    printf("SOMA = %d\n", soma);

    return 0;
}