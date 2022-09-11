#include <stdio.h>

int main() {

    int i;
    double num, soma = 0;
    int pos = 0;
    
    for (i = 0; i < 6; i++) {
        scanf("%lf", &num);
        if (num > 0) {
            pos++;
            soma += num;
        }
    }

    printf("%d valores positivos\n%.1lf\n", pos, soma/pos);

    return 0;
}