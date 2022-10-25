/*

Вычислить число сочетаний из n по k без повторений

*/

#include<stdio.h>

int main(){
    int n;
    int k;
    scanf("%d %d", &n, &k);
    int n1 = 1;
    int k1 = 1;
    int n_k = 1;

    for(int i = 1; i <= n; n1 *= i, i++);
    for(int i = 1; i <= k; k1 *= i, i++);
    for(int i = 1; i <= (n - k); n_k *= i, i++);

    printf("%d", n1 / (k1 * n_k));
}