#include <stdio.h>
#include <stdlib.h>

int main() {

    double a, b, c, i, buf;
    scanf("%lf%lf%lf", &a, &b, &c);

    for (i = 2; i > 0; i--) {
        if (a < b) {
            buf = b;
            b = a;
            a = buf;
        }
        if (b < c) {
            buf = c;
            c = b;
            b = buf;
        }
    }

    if (a >= b +c) {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }

    if ((a * a) == ((b * b) + (c * c))) printf("TRIANGULO RETANGULO\n");
    else if ((a * a) > ((b * b) + (c * c))) printf("TRIANGULO OBTUSANGULO\n");
    else printf("TRIANGULO ACUTANGULO\n");

    if(a == b && b == c) printf("TRIANGULO EQUILATERO\n");
    else if ((a == b) || (b == c) || (a == c)) printf("TRIANGULO ISOSCELES\n");

    return 0;
}