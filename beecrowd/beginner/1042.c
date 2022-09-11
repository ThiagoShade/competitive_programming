#include <stdio.h>

int main() {

    int a, b, c, x1, x2, x3, buf, i;
    scanf("%d%d%d", &a, &b, &c);

    x1 = a;
    x2 = b;
    x3 = c;

    i = 0;
    while (i < 2) {
        if (x2 < x1) {
            buf = x2;
            x2 = x1;
            x1 = buf;
        }
        if (x3 < x2) {
            buf = x2;
            x2 = x3;
            x3 = buf;
        }
        i++;
    }

    printf("%d\n%d\n%d\n", x1, x2, x3);
    printf("\n%d\n%d\n%d\n", a, b, c);

    return 0;
}