/*
Given real number a, natural number n. Calculate: a * n. Do not use multiplication [ не использовать оператор умножения ].

Example:
Input:
2 2
Output:
4

Example:
Input:
2.5 2
Output:
5
*/

#include<stdio.h>
int main(){
    int a, n;
    int result = 0;
    scanf("%i %i", &a, &n);

    for(int i = 0; i < n; result += a, i++);
    printf("%d", result);
    
    return 0;
}