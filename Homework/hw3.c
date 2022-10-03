#include<stdio.h>
//Задача - найти максимум среди двух введенных чисел.

int main(void) {
    int a, b;
    printf("Enter your numbers : ");    //Ввод двух чисел для программы
    scanf("%d", &a); scanf("%d", &b);


    if (b > a) { // прогонка через три условия 1) Второе число больше первого 2) Числа равны 3) Первое число больше второго 
        printf("The greatest number is %d. \n", b);
    } else if (a == b) {
        printf("The numbers are equal.\n");
    } else if (a > b){
        printf("The greatest number is %d. \n", a);
    }

    return 0;
}