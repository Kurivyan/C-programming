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
    scanf("%f %i", &a, &n);
    float result = a;

    for (int i = 1; i < n; result *= (a + i), i++);
    printf("%f", result);
    return 0;
}