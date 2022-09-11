#include <stdio.h>

int main() { // Calcula a diferença do produto de a * b pelo produto de c * d

    int a, b, c, d, resultado;
    scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);
    resultado = (a * b) - (c * d);

    printf("DIFERENCA = %d\n", resultado);

    return 0;
}