#include<stdio.h>

int main(void) {
// Задание : если число делится на 2 -> умножить его на 2 и вывести, если делится на 3 -> умножить на 3 и вывести, если не делится -> вывести
    printf("\nEnter the number you want to check : "); 
    long int n; scanf("%ld", &n); //Инициализация и запись переменной для работы

    if (n % 2 == 0 && n % 3 == 0) { // Прогонка введенного числа через три условия из Задачи.
        printf("After all your number -> %ld \n", n * 6);
    } else if (n % 2 == 0 && n % 3 != 0) {
        printf("After all your number -> %ld \n", n * 2);
    } else if (n % 2 != 0 && n % 3 == 0) {
        printf("After all your number -> %ld \n", n * 3);
    } else {
        printf("After all your number -> %ld \n", n);
    }

    return 0;
}