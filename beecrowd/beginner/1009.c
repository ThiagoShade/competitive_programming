#include <stdio.h>

int main() { // Armazena o nome de um(a) vendedor(a) e a partir de seu salário fixo e seu valor em vendas calcula o salário final com o bônus das vendas 15%.
    
    double sal_fixo, sal_final, vendas;
    char nome;

    scanf("%s\n%lf\n%lf", &nome, &sal_fixo, &vendas);
    sal_final = sal_fixo + (vendas * 0.15);

    printf("TOTAL = R$ %.2lf\n", sal_final);

    return 0;
}