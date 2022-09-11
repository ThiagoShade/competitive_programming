#include <stdio.h>

int main() { // Calcula o tempo necessário para que um veículo A a 90 km/h leva para abrir uma certa distância de um veículo B a 60 km/h.

    int distancia, tempo;
    scanf("%d", &distancia);
    tempo = 2 * distancia;

    printf("%d minutos\n", tempo);


    return 0;
}