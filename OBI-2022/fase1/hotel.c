#include <stdio.h>

int main() {

    int diaria, aumento, dia, total;
    scanf("%d\n%d\n%d", &diaria, &aumento, &dia);

    if (dia == 1) {
        total = 31 * diaria;
        
    } else if (dia > 1 && dia < 16) {
        aumento = (dia - 1) * aumento;
        total = (32 - dia) * (diaria + aumento);
    } else {
        aumento = 14 * aumento;
        total = (32 - dia) * (diaria + aumento);
    }

    printf("%d", total);

    return 0;
}
