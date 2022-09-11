#include <stdio.h>

int main() { // Calcula a quantidade de combustível necessária a partir do tempo e da velocidade média de um percurso, sabendo anteriormente o rendimento de 12 km/l

    int tempo, velocidade_media, distancia;
    double combustivel;
    
    scanf("%d\n%d", &tempo, &velocidade_media);
    
    distancia = velocidade_media * tempo;
    combustivel = distancia / 12.0;

    printf("%.3lf\n", combustivel);

    return 0;
}