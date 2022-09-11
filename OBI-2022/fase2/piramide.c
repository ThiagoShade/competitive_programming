#include <stdio.h>

int main() {

    int i, j, k, i2, i3;
    int dim, cam;
    int pir[100][100], cam_blo;

    scanf("%d", &dim);

    cam_blo = 1;

    cam = dim/2;
    for (i = 0; i < cam; i++) {
        for (j = 0; j < dim - (i*2); j++) {
            pir[i][j+i] = i+1;
        }
        for (j = 0; j < dim - (i*2); j++) {
            pir[j+i][dim-i-1] = i+1;
        }
        for (j = 0; j < dim - (i*2); j++) {
            pir[dim-i-1][dim-j-1-i] = i+1;
        }
        for (j = 0; j < dim - (i*2); j++) {
            pir[dim-j-1-i][i] = i+1;
        }
        /*
        for (i2 = 0; i2 < dim; i2++) {
            for (i3 = 0; i3 < dim; i3++) printf("%d", pir[i2][i3]);
        printf("\n");
        }
        printf("\n");
        */
    }

    if (dim%2!=0) pir[dim/2][dim/2] = i+1;// coloca o meio

    
    for (i = 0; i < dim; i++) {
        for (j = 0; j < dim; j++) printf("%d ", pir[i][j]);
        printf("\n");
    }
    
    return 0;
}