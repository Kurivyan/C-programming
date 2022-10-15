/*
Given natural number n. Compute 2 to the power of n. Do not use math.pow() [тут имеется в виду дополнительные библиотеки] function.

Example:
Input:
5
Output:
32
*/

#include<stdio.h>

int main(){
    int n;
    int result = 1;
    scanf("%i", &n);

    for(int i = 0; i < n; i++, result *= 2);
    printf("%d", result);
    return 0;
}