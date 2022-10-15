/*
Given natural number n. Calculate n!.
n! = 1*2*3*...*n.
Note: 0! = 1.

Example:
Input:
4
Output:
24
*/
#include<stdio.h>

int main(){
    int n;
    int result = 1;
    scanf("%d", &n);

    for(int i = 1; i <= n; result *= i, i++);
    printf("%d", result);
    return 0;
}