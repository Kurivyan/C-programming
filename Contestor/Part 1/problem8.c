/*
Input two numbers (with space between) and show the remainder from the division of the first number by the second one.

Input:
5 2

Output:
1

*/

#include<stdio.h>

int main(){
    int a, b;

    scanf("%i %i", &a, &b);

    printf("%i", a % b);
    
    return 0;
}