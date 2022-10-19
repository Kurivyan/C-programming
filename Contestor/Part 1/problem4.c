/*
Find and show the result of next expression: "x² + y - z:2", where 'z' is even number.

Input:
3 4 2

Output:
12

*/

#include<stdio.h>

int main(){
    int x, y, z; //создаем три переменные

    scanf("%i %i %i", &x, &y, &z); //вводим значения переменных

    printf("%i", (x * x)/* запись x² */ + y - (z / 2)); // выводим результат математического выражения
    return 0;
}