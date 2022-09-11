#include <stdio.h>

int main() {

    int i;
    int num;

    scanf("%d", &num);

    if (num%2 == 0) num++;

    for (i = 0; i < 6; i++) {
        printf("%d\n", num+(i*2));
    }


    return 0;
}