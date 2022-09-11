#include <stdio.h>

int main() {

    int m, n;
    int vezes;
    int board[200][200], l, c;
    int m_soma, soma;

    scanf("%d", &vezes);

    for (int i = 0; i < vezes; i++) {
        scanf("%d%d", &l, &c);

        for (int k = 0; k < l; k++) {
            for (int j = 0; j < c; j++) scanf("%d", &board[k][j]); // Lendo os valores das casas
        }

        m_soma = 0;
        soma = 0;
        for (int k = 0; k < l; k++) {
            for (int j = 0; j < c; j++) {
                m = k - 1;
                n = j - 1;
                while (m != -1 && n != -1) { // somando as casas da diagonal esquerda em cima
                    soma += board[m][n];
                    m--;
                    n--;
                }
                m = k - 1;
                n = j + 1;
                while (m != -1 && n != c) { // somando as casas da diagonal direita em baixo
                    soma += board[m][n];
                    m--;
                    n++;
                }
                m = k + 1;
                n = j - 1;
                while (m != l && n != -1) { // somando as casas da diagonal esquerda em baixo
                    soma += board[m][n];
                    m++;
                    n--;
                }
                m = k + 1;
                n = j + 1;
                while (m != l && n != c) { // somando as casas da diagonal direita em cima
                    soma += board[m][n];
                    m++;
                    n++;
                }
                soma += board[k][j]; // somando a casa;

                if (soma > m_soma) m_soma = soma;
                soma = 0;
            }

        }

        printf("%d\n", m_soma);
    }

    return 0;
}