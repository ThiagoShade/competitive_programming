#include <stdio.h>
#include <stdlib.h>

int main() {

    int menor, maior, maior_resposta, soma_def, soma, contador3, contador2, numero, i, contador1;
    scanf("%d\n%d\n%d", &menor, &maior, &soma_def);
    
    i = (maior - menor) + 1;
 
    contador1 = 0;
    contador2 = 0;
    maior_resposta = 0;


    while (i > 0) {

        numero = menor + contador1;
        soma = (numero / 10000) + ((numero % 10000) / 1000) + (((numero % 10000) % 1000) / 100) + ((((numero % 10000) % 1000) % 100) / 10) + ((((numero % 10000 ) % 1000) % 100) % 10);
        if (soma == soma_def) {
            maior_resposta = (maior_resposta + numero + abs(maior_resposta - numero)) / 2;
            contador2++;
        }

        contador1++;
        i--;
    }

    
    if (contador2 == 0) {
        printf("-1");
    } else {
        
        printf("%d", maior_resposta);
    }
    

    return 0;
}