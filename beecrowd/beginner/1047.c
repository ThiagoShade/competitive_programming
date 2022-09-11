#include <stdio.h>

int main() {

    int hora_comeco, minuto_comeco, hora_final, minuto_final, duracao_hora, duracao_minutos;
    scanf("%d%d%d%d", &hora_comeco, &minuto_comeco, &hora_final, &minuto_final);

    if (hora_comeco == hora_final) {
        if (minuto_comeco == minuto_final) {
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
            return 0;
        }
        else if (minuto_final < minuto_comeco) {
            duracao_hora = 23;
            duracao_minutos = 60 - (minuto_comeco - minuto_final);
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao_hora, duracao_minutos);
            return 0;
        }
    }

    if (hora_comeco > hora_final) hora_final += 24;

    duracao_hora = (((60 * hora_final) + minuto_final) - ((60 * hora_comeco) + minuto_comeco)) / 60;
    duracao_minutos = (((60 * hora_final) + minuto_final) - ((60 * hora_comeco) + minuto_comeco)) % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao_hora, duracao_minutos);


    return 0;
}