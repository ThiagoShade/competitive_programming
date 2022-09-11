#include <bits/stdc++.h>
using namespace std;

/*
Find the smallest element of an shifted array.
Input example 6 7 9 15 19 2 3
Input example : 7 9 15 19 20 25 65 4 5 6
We need to find the "breaking point" by comparing the middle
term with the last and save the answer, and keep upgrading the
answear until we get to the exactly point and term.
*/


int main() {

    int i = 0;
    int L, R, mid;
    int ans;
    int array[100], qtd;

    while(cin >> array[i]) i++;

    qtd = i;

    ans = -1;
    L = 0;
    R = qtd-1;
    while (L <= R) {
        mid = L + (int) ((R-L)/2);
        if (array[mid] < array[qtd-1]) {
            ans = mid;
            R = mid - 1;
        }
        else {
            L = mid + 1;
        }
    }


    cout << array[ans] << '\n';

    return 0;
}