#include<stdio.h>

long long unsigned int recurs(int n) { // Внешняя функция, которая высчитывает значения факториала n!
    if (n <= 1)
        return 1;
    return recurs(n - 1) * n;
}

int main(void) {
    int a;
    printf("Type the number of factorial you want to count : \n"); 
    scanf("%d", &a); // Запись числа n в переменную a

    printf("Your factorial of %d is - > %llu \n", a, recurs(a)); // recurs(a) вызов функции с аргументом a . Вывод факториала a. 

    return 0;
}