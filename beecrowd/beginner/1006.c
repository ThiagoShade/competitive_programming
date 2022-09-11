#include <stdio.h>

int main() { // Calcula a média ponderada de 3 notas.

    double a, b, c, media;
    scanf("%lf\n%lf\n%lf", &a, &b, &c);

    media = ((a * 2) + (b * 3) + (c * 5)) / 10;
    printf("MEDIA = %.1lf\n", media);

    return 0;
}