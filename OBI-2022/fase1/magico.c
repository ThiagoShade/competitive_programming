#include <stdio.h>
#include <stdlib.h>

int main() {

    int tamanho, numero, ilegivel, linha, coluna, tamanho_original, contador, contador2, soma_arm1, soma_arm2, soma, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10;
    scanf("%d", &tamanho);
    contador = 0;

    tamanho_original = tamanho;


    if (tamanho == 3) {
        while (tamanho > 0) {
            scanf("%d %d %d", &d1, &d2, &d3);
            soma = d1 + d2 + d3;
            if (d1 == 0) {
                coluna = 1;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d2 == 0) {
                coluna = 2;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d3 == 0) {
                coluna = 3;
                linha = (tamanho_original - tamanho) + 1;
            }
            if (contador == 0) {
                soma_arm1 = soma;
            }
            if (contador == 1) {
                soma_arm2 = soma;
            }
            if (soma_arm1 != soma) {
                ilegivel = abs (soma_arm1 - soma);

                contador2++;
            }
            contador++;
            tamanho--;
        }
    }

    if (tamanho == 4) {
        while (tamanho > 0) {
            scanf("%d %d %d %d", &d1, &d2, &d3, &d4);
            soma = d1 + d2 + d3 + d4;
            if (d1 == 0) {
                coluna = 1;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d2 == 0) {
                coluna = 2;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d3 == 0) {
                coluna = 3;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d4 == 0) {
                coluna = 4;
                linha = (tamanho_original - tamanho) + 1;
            }
            if (contador == 0) {
                soma_arm1 = soma;
            }
            if (contador == 1) {
                soma_arm2 = soma;
            }
            if (soma_arm1 != soma) {
                ilegivel = abs (soma_arm1 - soma);

                contador2++;
            }
            contador++;
            tamanho--;
        }
    }

    if (tamanho == 5) {
        while (tamanho > 0) {
            scanf("%d %d %d %d %d", &d1, &d2, &d3, &d4, &d5);
            soma = d1 + d2 + d3 + d4 + d5;
            if (d1 == 0) {
                coluna = 1;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d2 == 0) {
                coluna = 2;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d3 == 0) {
                coluna = 3;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d4 == 0) {
                coluna = 4;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d5 == 0) {
                coluna = 5;
                linha = (tamanho_original - tamanho) + 1;
            }
            if (contador == 0) {
                soma_arm1 = soma;
            }
            if (contador == 1) {
                soma_arm2 = soma;
            }
            if (soma_arm1 != soma) {
                ilegivel = abs (soma_arm1 - soma);

                contador2++;
            }
            contador++;
            tamanho--;
        }
    }

    if (tamanho == 6) {
        while (tamanho > 0) {
            scanf("%d %d %d %d %d %d", &d1, &d2, &d3, &d4, &d5, &d6);
            soma = d1 + d2 + d3 + d4 + d5 + d6;
            if (d1 == 0) {
                coluna = 1;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d2 == 0) {
                coluna = 2;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d3 == 0) {
                coluna = 3;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d4 == 0) {
                coluna = 4;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d5 == 0) {
                coluna = 5;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d6 == 0) {
                coluna = 5;
                linha = (tamanho_original - tamanho) + 1;
            }
            if (contador == 0) {
                soma_arm1 = soma;
            }
            if (contador == 1) {
                soma_arm2 = soma;
            }
            if (soma_arm1 != soma) {
                ilegivel = abs (soma_arm1 - soma);

                contador2++;
            }
            contador++;
            tamanho--;
        }
    }

    if (tamanho == 7) {
        while (tamanho > 0) {
            scanf("%d %d %d %d %d %d %d", &d1, &d2, &d3, &d4, &d5, &d6, &d7);
            soma = d1 + d2 + d3 + d4 + d5 + d6 + d7;
            if (d1 == 0) {
                coluna = 1;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d2 == 0) {
                coluna = 2;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d3 == 0) {
                coluna = 3;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d4 == 0) {
                coluna = 4;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d5 == 0) {
                coluna = 5;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d6 == 0) {
                coluna = 6;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d7 == 0) {
                coluna = 7;
                linha = (tamanho_original - tamanho) + 1;
            }
            if (contador == 0) {
                soma_arm1 = soma;
            }
            if (contador == 1) {
                soma_arm2 = soma;
            }
            if (soma_arm1 != soma) {
                ilegivel = abs (soma_arm1 - soma);

                contador2++;
            }
            contador++;
            tamanho--;
        }
    }

    if (tamanho == 8) {
        while (tamanho > 0) {
            scanf("%d %d %d %d %d %d %d %d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8);
            soma = d1 + d2 + d3 + d4 + d5 + d6 + d7 + d8;
            if (d1 == 0) {
                coluna = 1;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d2 == 0) {
                coluna = 2;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d3 == 0) {
                coluna = 3;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d4 == 0) {
                coluna = 4;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d5 == 0) {
                coluna = 5;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d6 == 0) {
                coluna = 6;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d7 == 0) {
                coluna = 7;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d8 == 0) {
                coluna = 8;
                linha = (tamanho_original - tamanho) + 1;
            }
            if (contador == 0) {
                soma_arm1 = soma;
            }
            if (contador == 1) {
                soma_arm2 = soma;
            }
            if (soma_arm1 != soma) {
                ilegivel = abs (soma_arm1 - soma);

                contador2++;
            }
            contador++;
            tamanho--;
        }
    }

    if (tamanho == 9) {
        while (tamanho > 0) {
            scanf("%d %d %d %d %d %d %d %d %d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9);
            soma = d1 + d2 + d3 + d4 + d5 + d6 + d7 + d8 + d9;
            if (d1 == 0) {
                coluna = 1;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d2 == 0) {
                coluna = 2;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d3 == 0) {
                coluna = 3;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d4 == 0) {
                coluna = 4;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d5 == 0) {
                coluna = 5;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d6 == 0) {
                coluna = 6;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d7 == 0) {
                coluna = 7;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d8 == 0) {
                coluna = 8;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d9 == 0) {
                coluna = 9;
                linha = (tamanho_original - tamanho) + 1;
            }
            if (contador == 0) {
                soma_arm1 = soma;
            }
            if (contador == 1) {
                soma_arm2 = soma;
            }
            if (soma_arm1 != soma) {
                ilegivel = abs (soma_arm1 - soma);

                contador2++;
            }
            contador++;
            tamanho--;
        }
    }

    if (tamanho == 10) {
        while (tamanho > 0) {
            scanf("%d %d %d %d %d %d %d %d %d %d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10);
            soma = d1 + d2 + d3 + d4 + d5 + d6 + d7 + d8 + d9 + d10;
            if (d1 == 0) {
                coluna = 1;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d2 == 0) {
                coluna = 2;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d3 == 0) {
                coluna = 3;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d4 == 0) {
                coluna = 4;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d5 == 0) {
                coluna = 5;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d6 == 0) {
                coluna = 6;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d7 == 0) {
                coluna = 7;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d8 == 0) {
                coluna = 8;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d9 == 0) {
                coluna = 9;
                linha = (tamanho_original - tamanho) + 1;
            } else if (d1 == 0) {
                coluna = 10;
                linha = (tamanho_original - tamanho) + 1;
            }
            if (contador == 0) {
                soma_arm1 = soma;
            }
            if (contador == 1) {
                soma_arm2 = soma;
            }
            if (soma_arm1 != soma) {
                ilegivel = abs (soma_arm1 - soma);

                contador2++;
            }
            contador++;
            tamanho--;
        }
    }



    if (contador2 > 1) {
        ilegivel = abs(soma_arm2 - soma_arm1);
    }

    printf("%d\n%d\n%d", ilegivel, linha, coluna);



    return 0;
}