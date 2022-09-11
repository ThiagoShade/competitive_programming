#include <stdio.h>
#include <math.h>

int main() { //Calcula a distância entre dois pontos com a fórmula de G.A, a partir das coordenadas de dois pontos dados.

    double x1, y1, x2, y2, distancia;
    scanf("%lf %lf\n%lf %lf", &x1, &y1, &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 02));
    printf("%.4lf\n", distancia);


    return 0;
}