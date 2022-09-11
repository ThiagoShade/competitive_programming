#include <stdio.h>

int main() {

    int comeco, final, duracao;
    scanf("%d%d", &comeco, &final);

    if (comeco == final) duracao = 24;
    else if (final > comeco) duracao = final - comeco;
    else duracao = (24 - comeco) + final;

    printf("O JOGO DUROU %d HORA(S)\n", duracao);

    return 0;
}