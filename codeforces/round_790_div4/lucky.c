#include <stdio.h>

int main() {

    int vezes, numero, soma1 = 0, soma2 = 0;

    scanf("%d", &vezes);

    for (vezes; vezes > 0; vezes--) {
        scanf("%d", &numero);

        soma1 = (numero / 100000) + ((numero % 100000) / 10000) + (((numero % 100000) % 10000) / 1000);
        soma2 = ((((numero % 100000) % 10000) % 1000) / 100) + (((((numero % 100000) % 10000) % 1000) % 100) / 10) + (((((numero % 100000) % 10000) % 1000) % 100) % 10);

        if (soma1 == soma2) printf("YES\n");
        else printf("NO\n");

    }




    return 0;
}
