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

/*
recurs(6)
    recurs(5) [recurs(4) * 5 * recurs(3) * 4 * recurs(2) * 3] * 6
        recurs(4) [recurs(3) * 4 * recurs(2) * 3] * 5
            recurs(3) [recurs(2) * 3] * 4 
                recurs(2) [recurs(1) * 2] * 3
                    recurs(1) * 2
                        1

1 * 2 * 3 * 4 * 5 * 6
*/