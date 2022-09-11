#include <stdio.h>

int main() { // Este programa calcula a idade de uma pessoa em anos, meses e dias a partir apenas da idade em dias.

    int anos, meses, dias;
    scanf("%d", &dias);

    anos = dias / 365;
    meses = (dias % 365) / 30;
    dias = (dias % 365) % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);


    return 0;
}