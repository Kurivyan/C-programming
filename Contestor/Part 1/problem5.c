/*
Two numbers are entered, you need to find if first number is multiple(кратно) to second. First number must be bigger than second.

Input:
4 2

Output:
yes

*/

#include<stdio.h>

int main(){
    int a, b; // создаем две переменные

    scanf("%i %i", &a, &b); //вводим значения переменных

    if(a < b) { //сравниваем если первое число меньше второго
        return 0; // если первое число меньше второго => логическая ошибка, нужен выход из условия
    } else if(a % b == 0 /* проверяем является ли второе число делителем первого*/ && (a > b) /* сравниваем условие: первое число больше второго */){ //
        printf("yes"); // Выводим "да", если первое число кратно второму
    } else {
        printf("no"); // Выводим "нет", если первое число не кратно второму
    }
    return 0;
}