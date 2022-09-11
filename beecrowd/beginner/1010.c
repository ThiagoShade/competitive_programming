#include <stdio.h>

int main() { // Armazena o código do produto (dispensado) e calcula o preço final a ser pago a partir da quantidade de unidades e o preço por unidade.

    int codigo, quantidade1, quantidade2;
    double preco1, preco2, preco_final;
    scanf("%d %d %lf", &codigo, &quantidade1, &preco1);
    scanf("%d %d %lf", &codigo, &quantidade2, &preco2);

    preco_final = (preco1 * quantidade1) + (preco2 * quantidade2);

    printf("VALOR A PAGAR: R$ %.2lf\n", preco_final);

    return 0;
}