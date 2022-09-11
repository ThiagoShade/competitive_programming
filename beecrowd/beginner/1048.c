#include <stdio.h>

int main() {

    double salario, porcentagem, reajuste;
    scanf("%lf", &salario);

    if (salario <= 400) porcentagem = 0.15;
    else if (salario <= 800) porcentagem = 0.12;
    else if (salario <= 1200) porcentagem = 0.1;
    else if (salario <= 2000) porcentagem = 0.07;
    else porcentagem = 0.04;

    reajuste = salario * porcentagem;
    salario += reajuste;

    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.0lf %%\n", salario, reajuste, porcentagem * 100);


    return 0;
}