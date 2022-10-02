#include<stdio.h>

long long int func2(void){
    printf("\nEnter the number you want to check : "); 
    long int x; scanf("%ld", &x); //Инициализация и запись переменной для работы
    return x;
}

long int func(long int n) { //Внешняя функция
    if (n % 2 == 0 && n % 3 == 0) {
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

int main(void) {
// Задание : если число делится на 2 -> умножить его на 2 и вывести, если делится на 3 -> умножить на 3 и вывести, если не делится -> вывести
    int exit_flag;
    do {
        func(func2());
        printf("To repeat enter 0, to exit enter any number : "); scanf("%i",&exit_flag);
    } while(exit_flag == 0);
    return 0; //123
}