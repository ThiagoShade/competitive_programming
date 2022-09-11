#include <stdio.h>
/**
 * @brief Calcula o imposto de um salário.
 * 
 * @param salario
 * @param pimposto ponteiro que aponta para o imposto final.
 * 
 */
void calcula_imposto(double salario, double *pimposto);

int main() {

    double salario, imposto = 0;

    scanf("%lf", &salario);

    calcula_imposto(salario, &imposto);

    if (imposto == 0) printf("Isento\n");
    else printf("R$ %.2lf\n", imposto);

    return 0;
}

void calcula_imposto(double salario, double *pimposto) {

    if (salario - 4500 > 0) {
        *pimposto += 0.28 * (salario - 4500);
        salario -= (salario - 4500);
    }
    if (salario - 3000 > 0) {
        *pimposto += 0.18 * (salario - 3000);
        salario -= (salario - 3000);
    }
    if (salario - 2000 > 0) *pimposto += 0.08 * (salario - 2000);

}