#include <stdio.h>
#include <stdlib.h>

int main() {

   int vezes, comer, numero_caixas, menor_numero, doces[51], i1, i2, i3;

    scanf("%d", &vezes);

   for (vezes; vezes > 0; vezes--) {

        scanf("%d", &numero_caixas);

        comer = 0;

        for (i1 = 0; i1 < numero_caixas; i1++) scanf("%d", &doces[i1]);

        menor_numero = (doces[0] + doces[1] - abs(doces[0] - doces[1])) / 2;
        for(i2 = 2; i2 < numero_caixas; i2++) {
            menor_numero = (menor_numero + doces[i2] - abs(menor_numero - doces[i2])) / 2;
    
        }


        for(i3 = 0; i3 < numero_caixas; i3++) comer += doces[i3] - menor_numero;
        
        if (numero_caixas == 1) comer = 0;

        printf("%d\n", comer);
   } 




    return 0;
}