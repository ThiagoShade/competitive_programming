#include <stdio.h>

int main() { // Calcula o rendimento de um percurso a partir da distância percorrida e o combustível gasto.

    int distancia;
    double combustivel, rendimento;
    scanf("%d\n%lf", &distancia, &combustivel);
    rendimento = distancia/combustivel;

    printf("%.3lf km/l\n", rendimento);

    return 0;
}