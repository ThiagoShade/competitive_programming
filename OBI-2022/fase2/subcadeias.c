#include <stdio.h>
#include <string.h>

int main() {

    int i, j, k;
    int comp, comp_sub, ver, maior_sub = 1;
    char texto[501] = {'\0'}, sub1[501] = {'\0'};

    scanf("%d", &comp);
    scanf("%s", texto);

    for (i = 0; i < comp; i++) {
        for (j = 0; j < comp; j++) {
            memset(sub1, 0, comp*sizeof(char));
            for (k = 0; k < (comp-i-j); k++) {
                sub1[k] = texto[k+i];
            }

            k = 0;

            comp_sub = strlen(sub1);
            ver = 0;
            for (k = 0; k < (comp_sub/2); k++) {
                if (sub1[k] != sub1[comp_sub-1-k]) ver = 1;
                
            }
            if (ver == 0 && comp_sub > maior_sub) maior_sub = comp_sub;
        }
    }

    printf("%d\n", maior_sub);

    return 0;
}