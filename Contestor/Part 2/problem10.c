/*
Given real number a, natural number n. Calculate: a(a + 1)...(a + n - 1)

Example:
Input:
2 2
Output:
6

Example:
Input:
2.1 2
Output:
6.51
*/

#include<stdio.h>

int main(){
    float a;
    int n;
    int result = a;
    scanf("%f %i", &a, &n);

    for (int i = 1; i < n; i++){
        result = result * (a + i);
    }
    printf("%f", result);
    return 0;
}