/*
Input two numbers and show one of the following symbols: '>', '<' or '='.
'>' if first number is bigger, '<' if vice versa, and '=' if they are equal.

Input:
3 4

Output:
<

*/

#include<stdio.h>

int main(){
    int a, b; //создаем две переменные 

    scanf("%i %i", &a, &b); //вводим значения переменных

    if(a > b) { // Проверяем: первое число больше второго ? 
        printf(">"); // Выводим символ, что первое число больше
    } else if(a == b){ // Проверяем: первое число равно второму ? 
        printf("="); // Выводим символ, что первое число равно второму
    } else {
        printf("<"); // Крайний случай того, что второе число больше
    }
    
    return 0;
}