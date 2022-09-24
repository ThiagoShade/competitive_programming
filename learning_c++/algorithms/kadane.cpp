#include <bits/stdc++.h>
using namespace std;

int main() {

    int i, j, k;
    int qtd;
    int v[100];
    int sum, sum_m;

    cin >> qtd;
    for (i = 0; i < qtd; i++) {
        cin >> v[i];
    }

    sum_m = 0;
    for (i = 0; i < qtd; i++) {
        sum = max(v[i], sum+v[i]);
        if (sum > sum_m) sum_m = sum;
    }

    cout << sum_m << '\n';

    return 0;
}