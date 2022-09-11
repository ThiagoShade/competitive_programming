#include <bits/stdc++.h>
using namespace std;

/* 
Find the maximum term in a array increase and decrease
Input example: 2 3 4 6 9 12 11 8 6 4 1
We need to find the "breaking point" by comparing the middle
term with the previous and save the answer, and keep upgrading the
answear until we get to the exactly point and term.

But in this case, we need to take careful with accessing a[-1]
we solve this, faking an -∞.
*/

int main() {

    int i = 0, qtd;
    int L, R, mid;
    int ans;
    int array[100];

    while(cin >> array[i]) i++;

    qtd = i;

    L = 0;
    R = qtd-1;
    while(L <= R) {
        mid = L + (int) ((R-L)/2);
        if (mid == 0) { // "faking" -∞
            ans = mid;
            L = mid + 1;
        }  else {
            if (array[mid] > array[mid-1]) {
                ans = mid;
                L = mid + 1;
            } else {
                R = mid - 1;
            }
        }
    
        
    }

    cout << array[ans] << '\n';

    return 0;
}