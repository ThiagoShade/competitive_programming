#include <stdio.h>

int main() { // Este programa calcula a quantidade de cada nota e cada moeda a partir de um valor, de modo que o número de notas e moedas seja mínimo.

    double valor;
    int notas100, notas50, notas20, notas10, notas5, notas2, moedas1, moedas050, moedas025, moedas010, moedas005, moedas001;

    scanf("%lf", &valor);

    notas100 = valor / 100;
    notas50 = ((int) valor % 100) / 50;
    notas20 = (( (int) valor % 100) % 50) / 20;
    notas10 = ((((int) valor % 100) % 50) % 20) / 10;
    notas5 = (((((int) valor % 100) % 50) % 20) % 10) / 5;
    notas2 = ((((((int) valor % 100) % 50) % 20) % 10) % 5) / 2;
    moedas1 = ((((((int) valor % 100) % 50) % 20) % 10) % 5) % 2;
    valor = valor - ((int) valor);
    valor = valor * 100;
    moedas050 = valor / 50;
    moedas025 = ((int) valor % 50) / 25;
    moedas010 = (((int) valor % 50) % 25) / 10;
    moedas005 = ((((int) valor % 50) % 25) % 10) / 5;
    moedas001 = ((((int) valor % 50) % 25) % 10) % 5;

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", notas100, notas50, notas20, notas10, notas5, notas2);
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", moedas1, moedas050, moedas025, moedas010, moedas005, moedas001);



    return 0;
}