/*

Input two numbers(with space between) and show their sum.

Input:
3 4

Output:
7

*/

#include<stdio.h>

int main(){
    int number1, number2;

    scanf("%i %i", &number1, &number2);

    printf("%i", number1 + number2);
    
    return 0;
}