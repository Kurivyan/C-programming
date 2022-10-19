/*

Input two numbers(with space between) and show their sum.

Input:
3 4

Output:
7

*/

#include<stdio.h>

int main(){
    int number1, number2; //создаем две переменные 

    scanf("%i %i", &number1, &number2); //записываем две переменные

    printf("%i", number1 + number2); //выводим сумму переменных 
    
    return 0;
}