#include <stdio.h>

int main() {

    int i = 0;
    int num1, num2, qtd_odds;
    int aux, sum_2 = 0, sum_odds;

    scanf("%d%d", &num1, &num2);

    if ((num1 == num2) || (num1 == (num2 + 1)) || (num1 == (num2 - 1))) {
        printf("0\n");
        return 0;
    }

    if (num2 > num1) {
        aux = num1;
        num1 = num2;
        num2 = aux;
    }

    qtd_odds = (num1 - num2 - 1) / 2;

    if (qtd_odds == 1) {
        if (num1%2 == 0) sum_odds = num1-1;
        else sum_odds = num1-2;
    } else {
        if (num1%2 == 0) sum_2 += num1-1;
        else sum_2 += num1-2;
        if (num2%2 == 0) sum_2 += num2+1;
        else sum_2 += num2+2;

        if (qtd_odds%2==0) sum_odds = sum_2*(qtd_odds/2);
        else {
            sum_odds = (sum_2*(qtd_odds/2))+(num1-qtd_odds);
        }
    }

    printf("%d\n", sum_odds);

    return 0;
}