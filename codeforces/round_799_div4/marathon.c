#include <stdio.h>


int main() {

    int vezes, timur, b, c, d, frente;

    scanf("%d", &vezes);

    for(vezes; vezes > 0; vezes--) {
        scanf("%d%d%d%d", &timur, &b, &c, &d);
        frente = 0;
        if (b > timur) frente++;
        if (c > timur) frente++;
        if (d > timur) frente++;
        printf("%d\n", frente);
    }



    return 0;
}
