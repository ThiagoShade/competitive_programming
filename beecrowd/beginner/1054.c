#include <stdio.h>

int main() {

    double num;
    int i, positives = 0;

    for (i = 0; i < 6; i++) {
        scanf("%lf", &num);
        if (num > 0) positives++;
    }

    printf("%d valores positivos\n", positives);

    return 0;
}