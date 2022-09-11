#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int i;
    int num, num1, in = 0, out = 0;

    scanf("%d", &num);


    for (i = 0; i < num; i++) {
        scanf("%d", &num1);
        if (num1 >= 10 && num1 <= 20) in++;
        else out++;
    }

    printf("%d in\n%d out\n", in, out);

    return 0;
}