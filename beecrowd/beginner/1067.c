#include <stdio.h>

int main() {

    int i, vez;
    int num;

    scanf("%d", &num);
    
    vez = num/2;
    if (num%2 != 0) vez++;

    for (i = 0; i < vez; i++) {
        printf("%d\n", 1+(i*2));
    }

    return 0;
}