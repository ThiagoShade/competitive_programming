#include <stdio.h>

int main() {

    double nota1, nota2, nota3, nota4, exame, media;

    scanf("%lf%lf%lf%lf", &nota1, &nota2, &nota3, &nota4);

    media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 4) + nota4) / 10;
    printf("Media: %.1lf\n", media);

    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
        return 0;
    } else if (media < 5.0) {
        printf("Aluno reprovado.\n");
        return 0;
    } else {
        printf("Aluno em exame.\n");
        scanf("%lf", &exame);
        printf("Nota do exame: %.1lf\n", exame);
        if (((media + exame) / 2) >= 5.0) printf("Aluno aprovado.\n");
        else printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n", (media + exame) / 2);
    }


    return 0;
}