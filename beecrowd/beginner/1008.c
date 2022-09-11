#include <stdio.h>

int main() { 
/* Calcula o salário de um funcionário a partir da
quantidade de horas trabalhadas no 
mês e o valor que o funcionário 
recebe por hora.
 O funcionário é identificado por um número.
*/
    int num, horas;
    double sal_porhora, sal;

    scanf("%d\n%d\n%lf", &num, &horas, &sal_porhora);
    sal = sal_porhora * horas;

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", num, sal);

    return 0;
}