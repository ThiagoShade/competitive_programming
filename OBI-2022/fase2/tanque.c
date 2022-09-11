#include <stdio.h>

int main() {

    int cons, dist, lit_agr;

    scanf("%d%d%d", &cons, &dist, &lit_agr);

    if (((double) dist/cons) - lit_agr > 0) printf("%.1lf\n", ((double) dist/cons) - lit_agr);
    else printf("0.0\n");

    return 0;
}