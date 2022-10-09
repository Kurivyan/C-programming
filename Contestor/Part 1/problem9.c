/*
Input two numbers (k and c) and calculate the value of y for x = 0.1; 1; 5 where y = kx + c

Input:
3 4

Output:
x = 0.1 : y = 4.3
x = 1 : y = 7
x = 5 : y = 19

*/

#include<stdio.h>

int main() {
    float k, c;

    scanf("%f %f", &k, &c);

    printf("x = 0.1 : y = %f \n", (k * 0.1) + c);
    printf("x = 1 : y = %f \n", (k * 1) + c);
    printf("x = 5 : y = %f \n", (k * 5) + c);
    
    return 0;
}