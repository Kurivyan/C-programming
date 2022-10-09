/*
Input two numbers(with space between) and show their average. (Hint: integer divided by integer gives an integer)

Input:
3 4

Output:
3.5

*/

#include<stdio.h>

int main(){
    float a, b;

    scanf("%f %f", &a, &b);

    printf("%f", (a + b) / 2.);
    
    return 0;
}