#include <stdio.h>
#include <stdlib.h>
/**
 * @brief Calcula a quantidade mínima de mudanças de letras para que uma palavra corresponda a outra.
 * 
 * @param palavra1
 * @param palavra2
 * 
 * @return Retorna a quantidade mínima de mudanças
 */
int calcula_minimo(char palavra1[9], char palavra2[9], int letras);



int main() {

    char palavras[51][9];
    int vezes, i1, i2 = 0, i3, qtd_palavras, qtd_letras, diferenca, soma_diferenca, minimo, menor_minimo;

    scanf("%d", &vezes);

    for (vezes; vezes > 0; vezes--) {

        scanf("%d%d", &qtd_palavras, &qtd_letras);

        for (i1 = 0; i1 < qtd_palavras; i1++) scanf("%s", palavras[i1]);
           

        menor_minimo = 200;
        minimo = 0;
        i2 = 0;
        while (i2 != qtd_palavras) {

            for(i3 = 0; i3 < qtd_palavras - i2 - 1; i3++) {
                minimo = calcula_minimo(palavras[i2], palavras[i2+i3+1], qtd_letras);
                menor_minimo = (menor_minimo + minimo - abs(menor_minimo - minimo)) / 2;
            }


            i2++;
        }



        printf("%d\n", menor_minimo);
    }



    return 0;
}


int calcula_minimo(char palavra1[9], char palavra2[9], int letras) {

    int i, minimo;

    minimo = 0;
    for(i = 0; i < letras; i++) minimo += abs((int) palavra1[i] - (int) palavra2[i]); // Verifica a diferença inteira entre cada caractere de cada palavra.


    


    return minimo;
}
