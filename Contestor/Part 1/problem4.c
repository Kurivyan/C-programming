/*
Find and show the result of next expression: "x² + y - z:2", where 'z' is even number.

Input:
3 4 2

Output:
12

*/

#include<stdio.h>

int main(){
    int x, y, z;

    scanf("%i %i %i", &x, &y, &z);

    printf("%i", (x * x) + y - (z / 2));
    return 0;
}