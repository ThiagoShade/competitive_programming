#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp(const void * a, const void * b) {
    return (*(int*)b)-(*(int*)a);
}

int bin_s(int * a, int tam, int t) {
    int L = 0, R = tam-1, mid, ans_i = -1;

    while(L <= R) {
        mid = L + (int) ((R-L)/2);
        if ((a[mid] == t)) {
            return mid;
        }
        if (a[mid] < t) {
            L = mid+1;
        }
        else {
            if (a[mid] < a[ans_i] || ans_i == -1) ans_i = mid;
            R = mid-1;
        }
    
    }
    return ans_i;
}

int main() {

    int k;
    int vezes;
    int qtd_can, sugar[150000], prefix_sum[150000], queries;
    int min_cand, sug_obj, soma_sug, soma_can;
    int aux;
    int n, i_bus;

    scanf("%d", &vezes);

    for (int i = 0; i < vezes; i++) {


        scanf("%d%d", &qtd_can, &queries);

        for (int j = 0; j < qtd_can; j++) scanf("%d", sugar+j);

        qsort(sugar, qtd_can, sizeof(int), comp);

        soma_sug = 0;
        for (int j = 0; j < qtd_can; j++) {
            soma_sug += *(sugar+j);
            *(prefix_sum+j) = soma_sug;
        }

        for (int j = 0; j < queries; j++) {
            scanf("%d", &sug_obj);
            
            min_cand = bin_s(prefix_sum, qtd_can, sug_obj)+1;
            if (prefix_sum[min_cand-1] < sug_obj) min_cand = -1;

            printf("%d\n", min_cand);
        }

        memset(prefix_sum, 0, qtd_can+5);

    }

    return 0;
}