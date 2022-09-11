#include <stdio.h>

int main() { // Este programa calcula quantas horas, minutos e segundos tem um certo evento a partir apenas do  total de segundos.

    int segundos, minutos, horas;
    scanf("%d", &segundos);
    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    segundos = (segundos % 3600) % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}