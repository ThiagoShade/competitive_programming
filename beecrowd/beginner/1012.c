#include <stdio.h>

int main() {

    #define pi 3.14159
    double a, b, c, areatri, areacirculo, areatrapezio, areaquadrado, arearetangulo;
    scanf("%lf %lf %lf", &a, &b, &c);

    areatri = (a * c) / 2;
    areacirculo = pi * c * c;
    areatrapezio = ((a + b) * c) / 2;
    areaquadrado = b * b;
    arearetangulo = a * b;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", areatri, areacirculo, areatrapezio, areaquadrado, arearetangulo);

    return 0;
}