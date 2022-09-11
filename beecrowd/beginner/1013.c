#include <stdio.h>
#include <stdlib.h>

int main() { // Calcula o maior entre 3 números dados a partir de uma fórmula que determina o maior entre 2 números mt top.

    int a, b, c, maior;
    scanf("%d %d %d", &a, &b, &c);
    maior = (a + b + abs(a - b)) / 2;
    maior = (maior + c + abs(maior - c)) / 2;

    printf("%d eh o maior\n", maior);

    return 0;
}