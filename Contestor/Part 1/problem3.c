/*

Input two numbers(with space between) and show their product.

Input:
3 4

Output:
12

*/

#include<stdio.h>

int main(){
    int number1, number2; //создаем две переменные

    scanf("%i %i", &number1, &number2); //записываем две переменные 

    printf("%i", number1 * number2); //выводим произведение переменных
    
    return 0;
}