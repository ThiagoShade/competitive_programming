#include <stdio.h>

int main() { // Calcula o volume de uma esfera a partir do raio.

    #define pi 3.14159
    double r, area;
    scanf("%lf", &r);

    area = (4.0/3) * pi * r * r * r;

    printf("VOLUME = %.3lf\n", area);

    return 0;
}